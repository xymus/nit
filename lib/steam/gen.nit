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

redef class String
	fun to_nit_fun: String do return to_camel_case
end

var header_path = "/home/xymus/sdks/steam-sdk-135/public/steam/steam_api_flat.h"

var sig_re = "S_API ([a-zA-Z0-9_\* ]+) ([a-zA-Z0-9_]+)\\((.*)\\);".to_re

for line in header_path.to_path.read_lines do
	var words = line.split(" ")

	if words.is_empty or words.first != "S_API" then continue

	var sig = line.search(sig_re)
	if sig == null then
		print_error "Failed to parse: {line}"
		continue
	end

	var return_type = sig[1]
	var fun_name = sig[2]
	var args_str = sig[3]

	if return_type == null or fun_name == null or args_str == null then
		print_error "Failed to extract: {return_type or else "???"} | {fun_name or else "???"} | {args_str or else "???"}"
		continue
	end

	var args = args_str.to_s.split(", ")
	#print args

	var nit_name = fun_name.to_s.to_nit_fun
	var nit_return = ""
	if return_type != "void" then nit_return = ": {return_type}"
	var nit_args_block = "()"

	var c_return_code = ""
	if return_type != "void" then c_return_code = "return "

	var c_args_code = ""

	print """

# Wraps `{{{fun_name}}}`
fun {{{nit_name}}}{{{nit_return}}}{{{nit_args_block}}} `{
	{{{c_return_code}}}{{{fun_name}}}({{{c_args_code}}});
`}
"""
end

