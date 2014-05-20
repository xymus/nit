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
interface IPoint[N: Numeric]
	fun x: N is abstract
	fun y: N is abstract
end

# A 2d point and an implementation of `IPoint`
class Point[N: Numeric]
	super IPoint[N]

	redef var x: N
	redef var y: N

	init(x, y: N)
	do
		self.x = x
		self.y = y
	end

	redef fun to_s do return "({x}, {y})"
end

# An abstract 3d point, strongly linked to its implementation `Point3d`
interface IPoint3d[N: Numeric]
	super IPoint[N]

	fun z: N is abstract
end

# A 3d point and an implementation of `IPoint3d`
class Point3d[N: Numeric]
	super IPoint3d[N]
	super Point[N]

	redef var z: N

	init(x, y, z: N)
	do
		super
		self.z = z
	end

	redef fun to_s do return "({x}, {y}, {z})"
end

# An abstract 2d line segment
interface ILine[N: Numeric]
	type P: IPoint[N]

	fun point_left: P is abstract
	fun point_right: P is abstract
end

# A 2d line segment
class Line[N: Numeric]
	super ILine[N]

	redef var point_left: P
	redef var point_right: P

	init(a, b: P)
	do
		if a.x < b.x then
			point_left = a
			point_right = b
		else
			point_left = b
			point_right = a
		end
	end

	redef fun to_s do return "{point_left}--{point_right}"
end

# An abstract 3d line segment
interface ILine3d[N: Numeric]
	super ILine[N]

	redef type P: IPoint3d[N]
end

# A 3d line segment
class Line3d[N: Numeric]
	super Line[N]
	super ILine3d[N]
end
