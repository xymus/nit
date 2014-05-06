# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Simple tool to list Nit source files
module nitls

intrude import modelbuilder
import ordered_tree

class ProjTree
	super OrderedTree[Object]

	var opt_paths = false

	redef fun display(o)
	do
		if o isa MGroup then
			if opt_paths then
				return o.filepath.as(not null)
			else
				return "{o.name} ({o.filepath})"
			end
		else if o isa ModulePath then
			if opt_paths then
				return o.filepath
			else
				return "{o.name} ({o.filepath})"
			end
		else
			abort
		end
	end
end

var tc = new ToolContext

var opt_keep = new OptionBool("Ignore errors and files that are not a Nit source file", "-k", "--keep")
var opt_recursive = new OptionBool("Process directories recussively", "-r", "--recursive")
var opt_tree = new OptionBool("List source files in their groups and projects", "-t", "--tree")
var opt_source = new OptionBool("List source files", "-s", "--source")
var opt_project = new OptionBool("List projects paths (default)", "-P", "--project")
var opt_depends = new OptionBool("List dependencies of given modules", "-d", "--depends")
var opt_make = new OptionBool("List dependencies suitable for a rule in a Makefile. Alias for -d, -p and -s", "-M")
var opt_paths = new OptionBool("List only path (instead of name + path)", "-p", "--path")

tc.option_context.add_option(opt_keep, opt_recursive, opt_tree, opt_source, opt_project, opt_depends, opt_paths, opt_make)
tc.tooldescription = "Usage: nitls [OPTION]... <file.nit|directory>...\nLists the projects and/or paths of Nit sources files."
tc.process_options(args)

if opt_make.value then
	opt_depends.value = true
	opt_paths.value = true
	opt_source.value = true
end

var sum = opt_tree.value.to_i + opt_source.value.to_i + opt_project.value.to_i
if sum > 1 then
	print "Error: options --tree, --source, and --project are exclusives."
	print tc.tooldescription
	exit 1
end

var model = new Model
var mb = new ModelBuilder(model, tc)

if opt_depends.value then
	if opt_recursive.value then
		print "-M incompatible with -r"
		exit 1
	end

	mb.parse(tc.option_context.rest)
else
	var files
	if opt_recursive.value then
		files = new Array[String]
		for d in tc.option_context.rest do
			var pipe = new IProcess("find", d, "-name", "*.nit")
			while not pipe.eof do
				var l = pipe.read_line
				if l == "" then break # last line
				l = l.substring(0,l.length-1) # strip last oef
				files.add l
			end
			pipe.close
			pipe.wait
			if pipe.status != 0 and not opt_keep.value then exit 1
		end
	else
		files = tc.option_context.rest
	end

	for a in files do
		var mp = mb.identify_file(a)
		if mp == null then
			if not opt_keep.value then tc.check_errors
		end
	end
end

if sum == 0 then opt_project.value = true

if opt_tree.value then
	var ot = new ProjTree
	ot.opt_paths = opt_paths.value
	for p in model.mprojects do
		for g in p.mgroups do
			ot.add(g.parent, g)
			for mp in g.module_paths do
				ot.add(g, mp)
			end
		end
	end
	ot.sort_with(new CachedAlphaComparator)
	ot.write_to(stdout)
end

if opt_source.value then
	var list = new Array[String]
	for p in model.mprojects do
		for g in p.mgroups do
			for mp in g.module_paths do
				if opt_paths.value then
					list.add(mp.filepath)
				else
					list.add("{g.full_name}/{mp.name} ({mp.filepath})")
				end
			end
		end
	end
	alpha_comparator.sort(list)
	for l in list do print l
end

if opt_project.value then
	var list = new Array[String]
	for p in model.mprojects do
		var path = p.root.filepath.as(not null)
		if opt_paths.value then
			list.add(path)
		else
			list.add("{p.name} ({path})")
		end
	end
	alpha_comparator.sort(list)
	for l in list do print l
end
