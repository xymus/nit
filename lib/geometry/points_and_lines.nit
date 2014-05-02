# This file is part of NIT (http://www.nitlanguage.org).
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

# Provides interfaces and classes to represent basic geometry needs.
module points_and_lines

# An abstract 2d point, strongly linked to its implementation `Point`
interface APoint[N: Numeric]
	fun x: N is abstract
	fun y: N is abstract
end

# A 2d point and an implementation of `APoint`
class Point[N: Numeric]
	super APoint[N]

	redef var x: N
	redef var y: N

	init(x, y: N)
	do
		self.x = x
		self.y = y
	end
end

# An abstract 3d point, strongly linked to its implementation `Point3d`
interface APoint3d[N: Numeric]
	super APoint[N]

	fun z: N is abstract
end

# A 3d point and an implementation of `APoint3d`
class Point3d[N: Numeric]
	super APoint3d[N]

	redef var z: N

	init(x, y, z: N)
	do
		super
		self.z = z
	end
end

# An abstract 2d line segment
interface ALine[N: Numeric]
	type P: APoint[N]

	fun points: Couple[P]
end

class Line[N: Numeric]
	super ALine[N]

	redef var points = new Couple[P]

	init(a, b: P)
	do
		points.first = a
		prints.second = b
	end
end

interface ALine3d[N: Numeric]
	super ALine[N]

	redef type P: APoint3d[N]
end

class Line3d[N: Numeric]
	super Line[N]
	super ALine3d[N]
end
