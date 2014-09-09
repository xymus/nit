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

import serialization
import json_serialization

# Simple class
class A
	auto_serializable

	var b = false
	var c: Char
	var f: Float
	var i = 123
	var s = "asdf"
	var n: nullable Int

	init(b: Bool, c: Char, f: Float, i: Int, s: String, n: nullable Int)
	do
		self.b = b
		self.c = c
		self.f = f
		self.i = i
		self.s = s
	end

	redef fun to_s do return "<A: {b} {c} {f} {i} {s} {n != null}>"
end

# Sub-class of A
class B
	auto_serializable
	super A

	var ii: Int
	var ss: String

	init(b: Bool, c: Char, f: Float, i: Int, s: String, n: nullable Int, ii: Int, ss: String)
	do
		super(b, c, f, i, s, n)

		self.ii = ii
		self.ss = ss
	end

	redef fun to_s do return "<B: {super} {ii} {ss}>"
end

# Composed of an A and a B
class C
	auto_serializable

	var a: A
	var b = new B(false, 'b', 123.123, 2345, "hjkl", 12, 1111, "qwer")
	var aa: A

	init(a: A, b: B)
	do
		self.a = a
		self.b = b
		self.aa = a
	end

	redef fun to_s do return "<C: {a} {b}>"
end

# Class with cyclic reference
class D
	auto_serializable
	super B

	var d: nullable D = null

	redef fun to_s do return "<D: {super} {d != null}>"
end

# Class with generics
class E
	auto_serializable

	var a = new Array[Object].with_items("hello", 1234, 123.4)
	var b = new Array[nullable Serializable].with_items("hella", 2345, 234.5)
	init do end

	redef fun to_s do return "<E: a: {a.join(", ")}; b: {b.join(", ")}>"
end

# Class with generics
class F[N: Numeric]
	auto_serializable

	var n: N
	init(n: N) do self.n = n

	redef fun to_s do return "<E: {n}>"
end

var a = new A(true, 'a', 0.1234, 1234, "asdf", null)
var b = new B(false, 'b', 123.123, 2345, "hjkl", 12, 1111, "qwer")
var c = new C(a, b)
var d = new D(false, 'b', 123.123, 2345, "new line ->\n<-", null, 1111, "\t\f\"\r\\/")
d.d = d
var e = new E
var fi = new F[Int](2222)
var ff = new F[Float](33.33)

# Default works only with Nit serial
var tests = new Array[Serializable].with_items(a, b, c, d, e, fi, ff)

# Alt1 should work without nitserial
#alt1# tests = new Array[Serializable].with_items(a, b, c, d)

for o in tests do
	var stream = new StringOStream
	var serializer = new JsonSerializer(stream)
	serializer.serialize(o)

	var deserializer = new JsonDeserializer(stream.to_s)
	var deserialized = deserializer.deserialize

	print "# Nit:\n{o}\n"
	print "# Json:\n{stream}\n"
	print "# Back in Nit:\n{deserialized or else "null"}\n"
end
