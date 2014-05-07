# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module simple_json_reader

import standard
private import json_parser
private import json_lexer

redef class Nvalue
	fun to_nit_object: nullable Object is abstract
end

redef class Nvalue_number
	redef fun to_nit_object
	do
		var text = n_number.text
		if text.chars.has('.') or text.chars.has('e') or text.chars.has('E') then return text.to_f
		return text.to_i
	end
end

redef class Nvalue_string
	redef fun to_nit_object do return n_string.to_nit_string
end

redef class Nvalue_true
	redef fun to_nit_object do return true
end

redef class Nvalue_false
	redef fun to_nit_object do return false
end

redef class Nvalue_null
	redef fun to_nit_object do return null
end

redef class Nstring
	# FIXME support \n, etc.
	fun to_nit_string: String do return text.substring(1, text.length-2).
		replace("\\\\", "\\").replace("\\\"", "\"").replace("\\b", "\b").
		replace("\\/", "/").replace("\\n", "\n").replace("\\r", "\r").
		replace("\\t", "\t")
end

redef class Nvalue_object
	redef fun to_nit_object
	do
		var obj = new HashMap[String, nullable Object]
		var members = n_members
		if members != null then
			var pairs = members.pairs
			for pair in pairs do obj[pair.name] = pair.value
		end
		return obj
	end
end

redef class Nmembers
	fun pairs: Array[Npair] is abstract
end

redef class Nmembers_tail
	redef fun pairs
	do
		var arr = n_members.pairs
		arr.add n_pair
		return arr
	end
end

redef class Nmembers_head
	redef fun pairs do return [n_pair]
end

redef class Npair
	fun name: String do return n_string.to_nit_string
	fun value: nullable Object do return n_value.to_nit_object
end

redef class Nvalue_array
	redef fun to_nit_object
	do
		var arr = new Array[nullable Object]
		var elements = n_elements
		if elements != null then
			var items = elements.items
			for item in items do arr.add(item.to_nit_object)
		end
		return arr
	end
end

redef class Nelements
	fun items: Array[Nvalue] is abstract
end

redef class Nelements_tail
	redef fun items
	do
		var items = n_elements.items
		items.add(n_value)
		return items
	end
end

redef class Nelements_head
	redef fun items do return [n_value]
end

redef class String
	fun json_to_nit_object: nullable Object
	do
		var lexer = new Lexer_json(self)
		var parser = new Parser_json
		var tokens = lexer.lex
		parser.tokens.add_all(tokens)
		var root_node = parser.parse
		if root_node isa NStart then
			return root_node.n_0.to_nit_object
		else
			assert root_node isa NLexerError
			var pos = root_node.position
			print "Json parsing error: {root_node.message} at {pos or else "<unknown>"} for {root_node}"
			return null
		end
	end
end
