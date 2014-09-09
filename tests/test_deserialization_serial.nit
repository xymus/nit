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

# This file is generated by nitserial
# Saved here for testing
module test_deserialization_serial

import test_deserialization
import serialization

redef class Deserializer
	redef fun deserialize_class(name)
	do
			if name == "Array[Object]" then return new Array[Object].from_deserializer(self)
			if name == "Array[nullable Serializable]" then return new Array[nullable Serializable].from_deserializer(self)
			if name == "F[Int]" then return new F[Int].from_deserializer(self)
			if name == "F[Float]" then return new F[Float].from_deserializer(self)
			if name == "Array[Serializable]" then return new Array[Serializable].from_deserializer(self)
			if name == "Array[String]" then return new Array[String].from_deserializer(self)
			if name == "Array[HashMap[String, nullable Object]]" then return new Array[HashMap[String, nullable Object]].from_deserializer(self)
			if name == "Array[Match]" then return new Array[Match].from_deserializer(self)
			if name == "Array[nullable Object]" then return new Array[nullable Object].from_deserializer(self)
			if name == "Array[FlatBuffer]" then return new Array[FlatBuffer].from_deserializer(self)
		return super
	end
end
