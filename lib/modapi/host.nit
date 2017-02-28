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

module host is
	new_annotation(modable)
	new_annotation(modusable)
end

import nitc::interpreter
intrude import nitc::toolcontext # for ToolContext::messages

import modapi

class ModInfo
	var name: Text
	var path: Text

	var mod: nullable Mod = null

	fun load: Mod
	do
		var mod = new Mod(self)

		mod.parse
		if mod.errors.is_empty then mod.execute_main

		self.mod = mod
		return mod
	end
end

class Mod
	var info: ModInfo

	var errors = new Array[Message]

	var interpreter: nullable NaiveInterpreter = null

	var mainmodule: nullable MModule = null

	private fun parse
	do
		var toolcontext = new ToolContext
		toolcontext.process_options([info.path.to_s])

		var model = new Model
		var modelbuilder = new ModelBuilder(model, toolcontext)

		var mmodules = modelbuilder.parse([info.path.to_s])

		for msg in modelbuilder.toolcontext.messages do
			if msg.tag == null then errors.add msg
		end

		if errors.is_empty then
			modelbuilder.run_phases
		end

		var mainmodule = toolcontext.make_main_module(mmodules)
		self.mainmodule = mainmodule

		var interpreter = new NaiveInterpreter(modelbuilder, mainmodule, new Array[String])
		self.interpreter = interpreter
	end

	private fun execute_main
	do
		var interpreter = interpreter
		var mainmodule = mainmodule
		assert interpreter != null and mainmodule != null
		interpreter.start(mainmodule)
	end
end

redef class Path
	var available_mods: Array[ModInfo] is lazy do
		abort
	end
end

redef class Sys

	var loaded_mods = new Array[Mod]
	#private var info2mod = new Map[ModInfo, Mod]
end
