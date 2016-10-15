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

# Services to read JSON: `from_json_string` and `JsonDeserializer`
module serialization_read

import ::serialization::caching
private import ::serialization::engine_tools
private import static
private import string_parser
import poset

# Deserializer from a Json string.
class JsonDeserializer
	super CachingDeserializer

	# Json text to deserialize from.
	private var text: Text

	# Accepted parameterized classes to deserialize
	#
	# If `whitelist.empty`, all types are accepted.
	#
	# ~~~nitish
	# import json::serialization
	#
	# class MyClass
	#     serialize
	# end
	#
	# var json_string = """
	# {"__class" = "MyClass"}
	# """
	#
	# var deserializer = new JsonDeserializer(json_string)
	# var obj = deserializer.deserialize
	# assert deserializer.errors.is_empty
	# assert obj isa MyClass
	#
	# deserializer = new JsonDeserializer(json_string)
	# deserializer.whitelist.add "Array[String]"
	# deserializer.whitelist.add "AnotherAcceptedClass"
	# obj = deserializer.deserialize
	# assert deserializer.errors.length == 1
	# assert obj == null
	# ~~~
	var whitelist = new Array[Text]

	# Should objects be checked if they a subtype of the static type before deserialization?
	#
	# Defaults to `true`, as it should always be activated.
	# It can be turned off to implement the subtype check itself.
	var check_subtypes = true is writable

	# Root json object parsed from input text.
	private var root: nullable Object is noinit

	# Depth-first path in the serialized object tree.
	private var path = new Array[Map[String, nullable Object]]

	# Names of the attributes from the root to the object currently being deserialized
	var attributes_path = new Array[String]

	# Last encountered object reference id.
	#
	# See `id_to_object`.
	var just_opened_id: nullable Int = null

	init do
		var root = text.parse_json
		if root isa Map[String, nullable Object] then path.add(root)
		self.root = root
	end

	redef fun deserialize_attribute(name, static_type)
	do
		if path.is_empty then
			# The was a parsing error or the root is not an object
			if not root isa Error then
				errors.add new Error("Deserialization Error: parsed JSON value is not an object.")
			end
			deserialize_attribute_missing = false
			return null
		end

		var current = path.last

		if not current.keys.has(name) then
			# Let the generated code / caller of `deserialize_attribute` raise the missing attribute error
			deserialize_attribute_missing = true
			return null
		end

		var value = current[name]

		attributes_path.add name
		var res = convert_object(value, static_type)
		attributes_path.pop

		deserialize_attribute_missing = false
		return res
	end

	# This may be called multiple times by the same object from constructors
	# in different nclassdef
	redef fun notify_of_creation(new_object)
	do
		var id = just_opened_id
		if id == null then return # Register `new_object` only once
		cache[id] = new_object
	end

	# Convert the simple JSON `object` to a Nit object
	private fun convert_object(object: nullable Object, static_type: nullable String): nullable Object
	do
		if object isa JsonParseError then
			errors.add object
			return null
		end

		if object isa Map[String, nullable Object] then
			var kind = null
			if object.keys.has("__kind") then
				kind = object["__kind"]
			end

			# ref?
			if kind == "ref" then
				if not object.keys.has("__id") then
					errors.add new Error("Serialization Error: JSON object reference does not declare a `__id`.")
					return object
				end

				var id = object["__id"]
				if not id isa Int then
					errors.add new Error("Serialization Error: JSON object reference declares a non-integer `__id`.")
					return object
				end

				if not cache.has_id(id) then
					errors.add new Error("Serialization Error: JSON object reference has an unknown `__id`.")
					return object
				end

				return cache.object_for(id)
			end

			# obj?
			if kind == "obj" or kind == null then
				var id = null
				if object.keys.has("__id") then
					id = object["__id"]

					if not id isa Int then
						errors.add new Error("Serialization Error: JSON object declaration declares a non-integer `__id`.")
						return object
					end

					if cache.has_id(id) then
						errors.add new Error("Serialization Error: JSON object with `__id` {id} is deserialized twice.")
						# Keep going
					end
				end

				var class_name = object.get_or_null("__class")
				if class_name == null then
					# Fallback to custom heuristic
					class_name = class_name_heuristic(object)

					if class_name == null and static_type != null then
						# Fallack to the static type, strip the `nullable` prefix
						var prefix = "nullable "
						if static_type.has_prefix(prefix) then
							class_name = static_type.substring_from(prefix.length)
						else class_name = static_type
					end
				end

				if class_name == null then
					errors.add new Error("Serialization Error: JSON object declaration does not declare a `__class`.")
					return object
				end

				if not class_name isa String then
					errors.add new Error("Serialization Error: JSON object declaration declares a non-string `__class`.")
					return object
				end

				if whitelist.not_empty and not whitelist.has(class_name) then
					errors.add new Error("Deserialization Error: '{class_name}' not in whitelist")
					return null
				end

				if static_type != null and check_subtypes then
					var static_class = static_type.strip_nullable_and_params
					var dynamic_class = class_name.strip_nullable_and_params
					if not class_inheritance_metamodel.has_edge(dynamic_class, static_class) then
						errors.add new Error("Deserialization Error: `{class_name}` is not a subtype of the static type `{static_type}`")
						return null
					end
				end

				# advance on path
				path.push object

				just_opened_id = id
				var value = deserialize_class(class_name)
				just_opened_id = null

				# revert on path
				path.pop

				return value
			end

			# char?
			if kind == "char" then
				if not object.keys.has("__val") then
					errors.add new Error("Serialization Error: JSON `char` object does not declare a `__val`.")
					return object
				end

				var val = object["__val"]

				if not val isa String or val.is_empty then
					errors.add new Error("Serialization Error: JSON `char` object does not declare a single char in `__val`.")
					return object
				end

				return val.chars.first
			end

			errors.add new Error("Serialization Error: JSON object has an unknown `__kind`.")
			return object
		end

		# Simple JSON array without serialization metadata
		if object isa Array[nullable Object] then
			# Can we use the static type?
			if static_type != null then
				var prefix = "nullable "
				var class_name = if static_type.has(prefix) then
						static_type.substring_from(prefix.length)
					else static_type

				opened_array = object
				var value = deserialize_class(class_name)
				opened_array = null
				return value
			end

			# This branch should rarely be used:
			# when an array is the root object which is accepted but illegal in standard JSON,
			# or in strange custom deserialization hacks.

			var array = new Array[nullable Object]
			var types = new HashSet[String]
			var has_nullable = false
			for e in object do
				var res = convert_object(e)
				array.add res

				if res != null then
					types.add res.class_name
				else has_nullable = true
			end

			if types.length == 1 then
				var array_type = types.first

				var typed_array
				if array_type == "ASCIIFlatString" or array_type == "UnicodeFlatString" then
					if has_nullable then
						typed_array = new Array[nullable FlatString]
					else typed_array = new Array[FlatString]
				else if array_type == "Int" then
					if has_nullable then
						typed_array = new Array[nullable Int]
					else typed_array = new Array[Int]
				else if array_type == "Float" then
					if has_nullable then
						typed_array = new Array[nullable Float]
					else typed_array = new Array[Float]
				else
					# TODO support all array types when we separate the constructor
					# `from_deserializer` from the filling of the items.

					if not has_nullable then
						typed_array = new Array[Object]
					else
						# Unsupported array type, return as `Array[nullable Object]`
						return array
					end
				end

				assert typed_array isa Array[nullable Object]

				# Copy item to the new array
				for e in array do typed_array.add e
				return typed_array
			end

			# Uninferrable type, return as `Array[nullable Object]`
			return array
		end

		return object
	end

	# Current array open for deserialization, used by `SimpleCollection::from_deserializer`
	private var opened_array: nullable Array[nullable Object] = null

	redef fun deserialize(static_type)
	do
		errors.clear
		return convert_object(root, static_type)
	end

	# User customizable heuristic to infer the name of the Nit class to deserialize `json_object`
	#
	# This method is called only when deserializing an object without the metadata `__class`.
	# Use the content of `json_object` to identify what Nit class it should be deserialized into.
	# Or use `self.attributes_path` indicating where the deserialized object will be stored,
	# is is less reliable as some objects don't have an associated attribute:
	# the root/first deserialized object and collection elements.
	#
	# Return the class name as a `String` when it can be inferred,
	# or `null` when the class name cannot be found.
	#
	# If a valid class name is returned, `json_object` will then be deserialized normally.
	# So it must contain the attributes of the corresponding class, as usual.
	#
	# ~~~
	# class MyData
	#     serialize
	#
	#     var data: String
	# end
	#
	# class MyError
	#     serialize
	#
	#     var error: String
	#     var related_data: MyData
	# end
	#
	# class MyJsonDeserializer
	#     super JsonDeserializer
	#
	#     redef fun class_name_heuristic(json_object)
	#     do
	#         # Infer the Nit class from the content of the JSON object.
	#         if json_object.keys.has("error") then return "MyError"
	#         if json_object.keys.has("data") then return "MyData"
	#
	#         # Infer the Nit class from the attribute where it will be stored.
	#         # This line duplicates a previous line, and would only apply when
	#         # `MyData` is within a `MyError`.
	#         if attributes_path.not_empty and attributes_path.last == "related_data" then return "MyData"
	#
	#         return null
	#     end
	# end
	#
	# var json = """{"data": "some data"}"""
	# var deserializer = new MyJsonDeserializer(json)
	# var deserialized = deserializer.deserialize
	# assert deserializer.errors.is_empty
	# assert deserialized isa MyData
	#
	# json = """{"error": "some error message",
	#            "related_data": {"data": "some other data"}}"""
	# deserializer = new MyJsonDeserializer(json)
	# deserialized = deserializer.deserialize
	# assert deserializer.errors.is_empty
	# assert deserialized isa MyError
	# ~~~
	protected fun class_name_heuristic(json_object: Map[String, nullable Object]): nullable String
	do
		return null
	end
end

redef class Text

	# Deserialize a `nullable Object` from this JSON formatted string
	#
	# Warning: Deserialization errors are reported with `print_error` and
	# may be returned as a partial object or as `null`.
	#
	# This method is not appropriate when errors need to be handled programmatically,
	# manually use a `JsonDeserializer` in such cases.
	fun from_json_string: nullable Object
	do
		var deserializer = new JsonDeserializer(self)
		var res = deserializer.deserialize
		if deserializer.errors.not_empty then
			print_error "Deserialization Errors: {deserializer.errors.join(", ")}"
		end
		return res
	end

	# Strip the `nullable` prefix and the params from the class name `self`
	#
	# ~~~nitish
	# assert "String".strip_nullable_and_params == "String"
	# assert "Array[Int]".strip_nullable_and_params == "Array"
	# assert "Map[Set[String], Set[Int]]".strip_nullable_and_params == "Map"
	# ~~~
	private fun strip_nullable_and_params: String
	do
		var class_name = to_s

		var prefix = "nullable "
		if class_name.has_prefix(prefix) then class_name = class_name.substring_from(prefix.length)

		var bracket_index = class_name.index_of('[')
		if bracket_index == -1 then return class_name
		return class_name.substring(0, bracket_index)
	end
end

redef class SimpleCollection[E]
	redef init from_deserializer(v)
	do
		super
		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var open_array: nullable SequenceRead[nullable Object] = v.opened_array
			if open_array == null then
				# With metadata
				var arr = v.path.last.get_or_null("__items")
				if not arr isa SequenceRead[nullable Object] then
					# If there is nothing, we consider that it is an empty collection.
					if arr != null then v.errors.add new Error("Deserialization Error: invalid format in {self.class_name}")
					return
				end
				open_array = arr
			end

			# Try to get the name of the single parameter type assuming it is E.
			# This does not work in non-generic subclasses,
			# when the first parameter is not E, or
			# when there is more than one parameter. (The last one could be fixed)
			var class_name = class_name
			var items_type = null
			var bracket_index = class_name.index_of('[')
			if bracket_index != -1 then
				var start = bracket_index + 1
				var ending = class_name.last_index_of(']')
				items_type = class_name.substring(start, ending-start)
			end

			# Fill array
			for o in open_array do
				var obj = v.convert_object(o, items_type)
				if obj isa E then
					add obj
				else v.errors.add new AttributeTypeError(self, "items", obj, "E")
			end
		end
	end
end

redef class Map[K, V]
	redef init from_deserializer(v)
	do
		super

		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var length = v.deserialize_attribute("__length")
			var keys = v.path.last.get_or_null("__keys")
			var values = v.path.last.get_or_null("__values")

			# Length is optional
			if length == null and keys isa SequenceRead[nullable Object] then length = keys.length

			# Consistency check
			if not length isa Int or length < 0 or
			   not keys isa SequenceRead[nullable Object] or
			   not values isa SequenceRead[nullable Object] or
			   keys.length != values.length or length != keys.length then

				# If there is nothing or length == 0, we consider that it is an empty Map.
				if (length != null and length != 0) or keys != null or values != null then
					v.errors.add new Error("Deserialization Error: invalid format in {self.class_name}")
				end
				return
			end

			for i in length.times do
				var key = v.convert_object(keys[i])
				var value = v.convert_object(values[i])

				if not key isa K then
					v.errors.add new AttributeTypeError(self, "keys", key, "K")
					continue
				end

				if not value isa V then
					v.errors.add new AttributeTypeError(self, "values", value, "V")
					continue
				end

				if has_key(key) then
					v.errors.add new Error("Deserialization Error: duplicated key '{key or else "null"}' in {self.class_name}, previous value overwritten")
				end

				self[key] = value
			end
		end
	end
end

# ---
# Metamodel

# Class inheritance graph as a `POSet[String]` serialized to JSON
private fun class_inheritance_metamodel_json: NativeString is intern

redef class Sys
	# Class inheritance graph
	#
	# ~~~
	# var hierarchy = class_inheritance_metamodel
	# assert hierarchy.has_edge("String", "Object")
	# assert not hierarchy.has_edge("Object", "String")
	# ~~~
	var class_inheritance_metamodel: POSet[String] is lazy do
		var engine = new JsonDeserializer(class_inheritance_metamodel_json.to_s)
		engine.check_subtypes = false
		engine.whitelist.add_all(
			["String", "POSet[String]", "POSetElement[String]", "HashSet[String]", "HashMap[String, POSetElement[String]]"])
		var poset = engine.deserialize
		if engine.errors.not_empty then
			print_error engine.errors.join("\n")
			return new POSet[String]
		end
		if poset isa POSet[String] then return poset
		return new POSet[String]
	end
end

redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "POSet[String]" then return new POSet[String].from_deserializer(self)
		if name == "POSetElement[String]" then return new POSetElement[String].from_deserializer(self)
		if name == "HashSet[String]" then return new HashSet[String].from_deserializer(self)
		if name == "HashMap[String, POSetElement[String]]" then return new HashMap[String, POSetElement[String]].from_deserializer(self)

		return super
	end
end
