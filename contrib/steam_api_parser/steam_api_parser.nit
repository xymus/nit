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

import json::serialization

class SteamHeader
	serialize

	var typedefs: Array[Typedef]
	var enums: Array[Enum]
	var consts: Array[Const]
	var structs: Array[Struct]

	redef fun to_s do return "<{class_name} {typedefs.length} typedefs, {enums.length} enums, {consts.length} consts, {structs.length} structs"
end

class Enum
	serialize

	var enumname: String
	var values = new Array[EnumValue]
end

class EnumValue
	serialize

	var name: String
	var value: String # Int
end

class Typedef
	serialize

	var typedef: String
	var type_: String
end

class Const
	serialize

	var constname: String
	var consttype: String
	var constval: String
end

class Struct
	serialize

	var struct: String
	var fields: Array[StructField]
end

class StructField
	serialize

	var fieldname: String
	var fieldtype: String
end

class Method
	serialize

	var classname: String
	var methodname: String
	var returntype: String
	var params: Array[MethodParam]
end

class MethodParam
	serialize

	var paramname: String
	var paramtype: String
end

redef class JsonDeserializer
	redef fun class_name_heuristic(obj)
	do
		var ks = obj.keys
		if ks.has("typedefs") then return "SteamHeader"
		if ks.has("typedef") then return "Typedef"
		if ks.has("enumname") then return "Enum"
		if ks.has("name") then return "EnumValue"
		if ks.has("constname") then return "Const"
		if ks.has("struct") then return "Struct"
		if ks.has("fieldname") then return "StructField"
		if ks.has("methodname") then return "Method"
		if ks.has("paramname") then return "MethodParam"
		return super
	end

	redef fun deserialize_class(name)
	do
		if name == "Array[Typedef]" then return new Array[Typedef]
		if name == "Array[Enum]" then return new Array[Enum]
		if name == "Array[EnumValue]" then return new Array[EnumValue]
		if name == "Array[Const]" then return new Array[Const]
		if name == "Array[Struct]" then return new Array[Struct]
		if name == "Array[StructField]" then return new Array[StructField]
		if name == "Array[Method]" then return new Array[Method]
		if name == "Array[MethodParam]" then return new Array[MethodParam]
		return super
	end
end

var path = args.first
var content = path.to_path.read_all
var deser = new JsonDeserializer(content)
var cc = deser.deserialize

if cc == null or deser.errors.not_empty then
	print_error "Error: Deserialization failed with {deser.errors.join(", ")}"
else if cc isa SteamHeader then
	print cc
end
