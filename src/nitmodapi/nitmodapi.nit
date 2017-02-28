# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module nitmodapi

import gen_nit

import frontend

redef class ToolContext
	var modapi_phase: Phase = new ModapiPhase(self, [modelize_property_phase])

	var opt_output_host = new OptionString("Output file (can be 'stdout')", "-o", "--output-host")

	var opt_output_guest = new OptionString("Output file (can be 'stdout')", "-g", "--output-guest")

	# Where do we put the result?
	var opt_dir = new OptionString("Output directory", "--dir")

	init do option_context.add_option(opt_output_guest, opt_output_host, opt_dir)
end

private class ModapiPhase
	super Phase

	#var callable = new Array[APropdef]
	#var modables = new Set[MProperty]
	var mclasses_with_modables = new Set[MClass]

	redef fun process_npropdef(node)
	do
		var parent_modable = node.parent.as(AClassdef).how_modable
		if parent_modable == true or node.is_modable then
			var mpropdef = node.mpropdef
			if mpropdef == null then return
			#modables.add mpropdef.mproperty

			var mproperty = mpropdef.mproperty
			var mclass = mproperty.intro_mclassdef.mclass

			mclass.modables.add mproperty
			mclasses_with_modables.add mclass
		end
	end
end

redef class MClass
	var modables = new Set[MProperty]
end

redef class MClassDef

	# Methods with the `restful` annotation in this class
	private var restful_methods = new Array[MMethod]
end

redef class MMethod
	# HTTP access methods, e.g. `GET, POST, PUT or DELETE`
	private var restful_verbs = new Array[String] is lazy

	# Associated resources within an action, e.g. `foo` in `http://localhost/foo?arg=bar`
	private var restful_resources: Array[String] = [name] is lazy

	# Is this a `restful` method to be executed asynchronously
	private var restful_async = false
end

# ---

redef class ANode
	private fun is_modable: Bool do return false
	private fun is_nomodable: Bool do return false
end

redef class ADefinition
	redef fun is_modable do
		return get_annotations("modable").not_empty
	end
end

redef class AModule
	redef fun is_modable
	do
		var n_moduledecl = n_moduledecl
		return n_moduledecl != null and n_moduledecl.is_modable
	end
end

redef class AClassdef
	# Is this classed marked `serialize`? in part or fully?
	#
	# This method returns 3 possible values:
	# * `null`, this class is not to be serialized.
	# * `true`, the attributes of this class are to be serialized by default.
	# * `false`, the attributes of this class are to be serialized on demand only.
	fun how_modable: nullable Bool
	do
		# Is there a declaration on the classdef or the module?
		var serialize = is_modable

		if not serialize and not is_nomodable then
			# Is the module marked serialize?
			serialize = parent.as(AModule).is_modable
		end

		if serialize then return true

		if not serialize then
			# Is there an attribute marked serialize?
			for npropdef in n_propdefs do
				if npropdef.is_modable then
					return false
				end
			end
		end

		return null
	end
end

# ---
redef class NitModule
	var path: nullable Text = null

	fun conf(opt_dir, opt_output: OptionString, first_mmodule: MModule)
	do
		var path = opt_output.value
		if path == null then
			self.name = "{first_mmodule.name}_guest"
			path = "{self.name}.nit"

			var dir = opt_dir.value
			if dir != null then path = dir.join_path(path)
		else if path == "stdout" then
			self.name = "{first_mmodule.name}_guest"
			path = null
		else if path.has_suffix(".nit") then
			self.name = path.basename(".nit")
		else
			self.name = path.basename
			path += ".nit"
		end
		self.path = path
	end
end

var toolcontext = new ToolContext
toolcontext.tooldescription = """
Usage: nitmodapi [OPTION] module.nit [other_module.nit [...]]
TODO."""

toolcontext.process_options args
var arguments = toolcontext.option_context.rest

# Check options
if toolcontext.opt_output_guest.value != null and
   toolcontext.opt_output_host.value != null and
   toolcontext.opt_dir.value != null then

	print "Error: cannot use both --dir and --output TODO"
	exit 1
end

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse(arguments)
modelbuilder.run_phases
var first_mmodule = mmodules.first

var phase = toolcontext.modapi_phase
assert phase isa ModapiPhase

#print phase.modables

# Prepare 2 mods
var mods = new Array[NitModule]

var mod_guest = new NitModule("tmp")
mod_guest.conf(toolcontext.opt_dir, toolcontext.opt_output_guest, first_mmodule)
mods.add mod_guest

var mod_host = new NitModule("tmp")
mod_host.conf(toolcontext.opt_dir, toolcontext.opt_output_host, first_mmodule)
mods.add mod_host

for mod in mods do
	mod.annotations.add "generated"
	mod.annotations.add """no_warning("parentheses")"""
	mod.header = """
# This file is generated by nitrestful
# Do not modify, instead refine the generated services.
"""
end

# Guest - Generate code
for mclass in phase.mclasses_with_modables do
	mod_guest.content.add """
class {{{mclass}}}"""
	for mproperty in mclass.modables do
		mod_guest.content.add """
	fun {{{mproperty.name}}} is intern"""
	end
	mod_guest.content.add """
end"""
end

# Host - Generate code
mod_host.imports.add first_mmodule.full_name
mod_host.intrude_imports.add "nitc::naive_interpreter"

## Call host from guest
mod_host.content.add """
redef class AMethPropdef
	redef fun intern_call(v, mpropdef, args)
	do
		var prop = mpropdef.mproperty.name
		var clas = mpropdef.mclassdef.mclass.name

"""

for mclass in phase.mclasses_with_modables do
	mod_host.content.add """
		if clas == "{{{mclass}}}" then"""
	for mproperty in mclass.modables do
		mod_host.content.add """
			if prop == "{{{mproperty}}}" then
				var recv = args.first
				assert recv isa PrimitiveInstance[{{{mclass}}}]

				# TODO other args

				recv.val.{{{mproperty}}}

				# TODO return val
				return null
			"""
		mod_host.content.add """
			end"""
	end
	mod_host.content.add """
		end"""
end

mod_host.content.add """
		return super
	end
end
"""

## Call guest from host
for mclass in phase.mclasses_with_modables do
	mod_host.content.add """
redef class {{{mclass}}}"""
	for mproperty in mclass.modables do
		mod_host.content.add """
	redef fun {{{mproperty}}}
	do
		# Iterate over all mods
		for mod in loaded_mods do
			var i = mod.interpreter
			assert i != null

			# MClass
			var node = i.modelbuilder.mmodule2node(i.mainmodule)
			assert node != null
			var recv_mclass = i.modelbuilder.try_get_mclass_by_name(node, i.mainmodule, "{{{mclass}}}")
			assert recv_mclass != null

			# MMethod
			var mmethod = i.mainmodule.try_get_primitive_method("{{{mproperty}}}", recv_mclass)
			assert mmethod != null

			# Args
			var args = new Array[Instance]

			## self
			var mtype = recv_mclass.get_mtype(new Array[MType])
			args.add(new PrimitiveInstance[{{{mclass}}}](mtype, self))

			## TODO args

			# Execute call
			i.send(mmethod, args)

			## TODO return
	"""
		# TODO interpreter


		mod_host.content.add """
		end
	end"""
	end
	mod_host.content.add """
end
"""
end

for mod in mods do
	print mod
	var path = mod.path
	if path != null then
		# Write to file
		mod.write_to_file path.to_s
	else
		# Write to stdout
		mod.write_to stdout
	end
end
