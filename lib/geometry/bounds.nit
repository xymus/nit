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
module bounds

import points_and_lines

# An 2d abstract bounded object, strongly linked to its implementation `Bounded`
interface ABounded[N: Numeric]
	fun left: N is abstract
	fun right: N is abstract
	fun top: N is abstract
	fun bottom: N is abstract
end

# A 2d bounded object and an implementation of ABounded
class Bounded[N: Numeric]
	super ABounded[N]

	redef var left: N
	redef var right: N
	redef var top: N
	redef var bottom: N

	init(l, r, t, b: N)
	do
		self.left = l
		self.right = r
		self.top = t
		self.bottom = b
	end

	redef fun to_s do return "left: " + self.left.to_s + " right: " + self.right.to_s + " top:" + self.top.to_s + " bottom: " + self.bottom.to_s
end

# An 3d abstract bounded object, strongly linked to its implementation `Bounded`
interface ABounded3d[N: Numeric]
	super ABounded[N]

	fun front: N is abstract
	fun back: N is abstract
end

# A 3d bounded object and an implementation of ABounded
class Bounded3d[N: Numeric]
	super ABounded3d[N]

	redef var front: N
	redef var back: N

	init(l, r, t, b, front, back: N)
	do
		self.front = front
		self.back = back
	end
	
	redef fun to_s do return super + " front: " + self.front.to_s + " back: " + self.back.to_s
end

redef class APoint[N]
	super ABounded[N]

	redef fun left do return x
	redef fun right do return x
	redef fun top do return y
	redef fun bottom do return y
end

redef class APoint3d[N]
	super ABounded3d[N]

	redef fun front do return z
	redef fun back do return z
end

redef class ALine[N]
	super ABounded[N]

	redef fun left do return points.first.x.min(points.second.x)
	redef fun right do return points.first.x.max(points.second.x)
	redef fun top do return points.first.y.min(points.second.y)
	redef fun bottom do return points.first.y.max(points.second.y)
end

redef class ALine3d[N]
	super ABounded3d[N]

	redef fun front do return points.first.z.min(points.second.z)
	redef fun back do return points.first.z.max(points.second.z)
end