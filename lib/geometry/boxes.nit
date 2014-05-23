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
module boxes

import points_and_lines

# An 2d abstract bounded object
interface Boxed[N: Numeric]
	# must be < right
	fun left: N is abstract
	# must be > left
	fun right: N is abstract
	# must be > bottom
	fun top: N is abstract
	# must be < top
	fun bottom: N is abstract
	
	# Is `other` contained within `self`?
	#
	#     var a = new Box[Int].lbwh(1, 1, 4, 4)
	#     var b = new Box[Int].lbwh(2, 2, 2, 2)
	#     var c = new Box[Int].lbwh(0, 2, 8, 2)
	#     assert a.contains(b)
	#     assert not b.contains(a)
	#     assert c.contains(b)
	#     assert not b.contains(c)
	#     assert not a.contains(c)
	#     assert not c.contains(a)
	fun contains(other: Boxed[N]): Bool
	do
		return self.top >= other.top and self.bottom <= other.bottom and
			self.left <= other.left and self.right >= other.right
	end

	# Does `self` intersect with `other`?
	#
	#     var a = new Box[Int].lbwh(0, 0, 2, 2)
	#     var b = new Box[Int].lbwh(1, 1, 8, 2)
	#     var c = new Box[Int].lbwh(3, 0, 2, 8)
	#     assert a.intersects(b)
	#     assert b.intersects(a)
	#     assert b.intersects(c)
	#     assert c.intersects(b)
	#     assert not c.intersects(a)
	#     assert not a.intersects(c)
	fun intersects(other: Boxed[N]): Bool
	do
		return self.left <= other.right and other.left <= self.right and
			self.top >= other.bottom and other.top >= self.bottom
	end
end

# A 2d bounded object and an implementation of `Boxed`
#
# This class offers many constructor specialized for different usage. They are
# named according to the order of their arguments.
class Box[N: Numeric]
	super Boxed[N]

	redef var left: N
	redef var right: N
	redef var top: N
	redef var bottom: N

	# Create a `Box` covering all of the `boxed`
	#
	#     var box = new Box[Int].around(new Point[Int](-4,-4), new Point[Int](4,4))
	#     assert box.left == -4 and box.bottom == -4
	#     assert box.right == 4 and box.top == 4
	init around(boxed: Boxed[N]...)
	do
		assert not boxed.is_empty

		var left: nullable N = null
		var right: nullable N = null
		var top: nullable N = null
		var bottom: nullable N = null

		for box in boxed do
			if left == null or box.left < left then left = box.left
			if right == null or box.right > right then right = box.right
			if top == null or box.top > top then top = box.top
			if bottom == null or box.bottom < bottom then bottom = box.bottom
		end

		assert left != null and right != null and top != null and bottom != null

		self.left = left
		self.right = right
		self.top = top
		self.bottom = bottom
	end

	# Create a `Box` using left, right, bottom and top
	init lrbt(left, right, bottom, top: N)
	do
		self.left = left
		self.right = right
		self.top = top
		self.bottom = bottom
	end

	# Create a `Box` using left, right, top and bottom
	init lrtb(left, right, top, bottom: N)
	do
		self.left = left
		self.right = right
		self.top = top
		self.bottom = bottom
	end

	# Create a `Box` using left, bottom, width and height
	init lbwh(left, bottom, width, height: N)
	do
		self.left = left
		self.bottom = bottom

		self.right = left + width
		self.top = bottom + height
	end

	# Create a `Box` using left, top, width and height
	init ltwh(left, top, width, height: N)
	do
		self.left = left
		self.top = top

		self.right = left + width
		self.bottom = top - height
	end

	redef fun to_s do return "<left: {left}, right: {right}, top: {top}, bottom: {bottom}>"
end

# An 3d abstract bounded object
interface Boxed3d[N: Numeric]
	super Boxed[N]

	fun front: N is abstract
	fun back: N is abstract
	
	#     var a = new Box3d[Int].lbfwhd(1, 1, 1, 4, 4, 4)
	#     var b = new Box3d[Int].lbfwhd(2, 2, 2, 2, 2, 2)
	#     var c = new Box3d[Int].lbfwhd(2, 2, 0, 2, 2, 8)
	#     assert a.contains(b)
	#     assert not b.contains(a)
	#     assert c.contains(b)
	#     assert not b.contains(c)
	#     assert not a.contains(c)
	#     assert not c.contains(a)
	redef fun contains(other)
	do
		return super and (not other isa Boxed3d[N] or
			(self.front <= other.front and self.back >= other.back))
	end

	#     var a = new Box3d[Int].lbfwhd(0, 0, 0, 2, 2, 2)
	#     var b = new Box3d[Int].lbfwhd(1, 1, 1, 8, 2, 2)
	#     var c = new Box3d[Int].lbfwhd(3, 0, 0, 2, 2, 8)
	#     assert a.intersects(b)
	#     assert b.intersects(a)
	#     assert b.intersects(c)
	#     assert c.intersects(b)
	#     assert not c.intersects(a)
	#     assert not a.intersects(c)
	redef fun intersects(other)
	do
		return super and (not other isa Boxed3d[N] or
			(self.back >= other.front and other.back >= self.front))
	end
end

# A 3d bounded object and an implementation of Boxed
#
# This class offers many constructor specialized for different usage. They are
# named according to the order of their arguments.
class Box3d[N: Numeric]
	super Boxed3d[N]
	super Box[N]

	redef var front: N
	redef var back: N

	# Create a `Box3d` using left, right, bottom, top, front and back
	init lrbtfb(left, right, bottom, top, front, back: N)
	do
		lrbt(left, right, bottom, top)

		self.front = front
		self.back = back
	end

	# Create a `Box3d` using left, right, top, bottom, front and back
	init lrtbfb(left, right, top, bottom, front, back: N)
	do
		lrtb(left, right, top, bottom)

		self.front = front
		self.back = back
	end

	# Create a `Box3d` using left, top, front, width, height and depth
	init lbfwhd(left, bottom, front, width, height, depth: N)
	do
		lbwh(left, bottom, width, height)

		self.front = front
		self.back = front + depth
	end

	# Create a `Box3d` using left, top, front, width, height and depth
	init ltfwhd(left, top, front, width, height, depth: N)
	do
		ltwh(left, top, width, height)

		self.front = front
		self.back = front + depth
	end
	
	redef fun to_s do return "<left: {left}, right: {right}, top: {top}, bottom: {bottom}, front: {front}, back: {back}"
end

redef class IPoint[N]
	super Boxed[N]

	redef fun left do return x
	redef fun right do return x
	redef fun top do return y
	redef fun bottom do return y
end

redef class IPoint3d[N]
	super Boxed3d[N]

	redef fun front do return z
	redef fun back do return z
end

redef class ILine[N]
	super Boxed[N]

	redef fun left do return point_left.x
	redef fun right do return point_right.x
	redef fun top do return point_left.y.min(point_right.y)
	redef fun bottom do return point_left.y.max(point_right.y)
end

redef class ILine3d[N]
	super Boxed3d[N]

	redef fun front do return point_left.z.min(point_right.z)
	redef fun back do return point_left.z.max(point_right.z)
end
