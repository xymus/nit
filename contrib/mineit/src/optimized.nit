# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# ...
#
module optimized

import mineit

redef class Sys
	private fun left: Int do return 0
	private fun right: Int do return 1
	private fun bottom: Int do return 2
	private fun top: Int do return 3
	private fun front: Int do return 4
	private fun back: Int do return 5
end

class VisibleFace
	super Block

	var side: Int

	var belongs_to: Block

	redef var vertices is lazy do
		var a = [-0.5, -0.5, -0.5]
		var b = [ 0.5, -0.5, -0.5]
		var c = [-0.5,  0.5, -0.5]
		var d = [ 0.5,  0.5, -0.5]

		var e = [-0.5, -0.5,  0.5]
		var f = [ 0.5, -0.5,  0.5]
		var g = [-0.5,  0.5,  0.5]
		var h = [ 0.5,  0.5,  0.5]

		var vv = new Array[Array[Float]]
		if side == sys.left then vv = [e, g, c, e, c, a]
		if side == sys.right then vv = [b, d, h, b, h, f]
		if side == sys.bottom then vv = [e, a, b, e, b, f]
		if side == sys.top then vv = [c, g, h, c, h, d]
		if side == sys.front then vv = [a, c, d, a, d, b]
		if side == sys.back then vv = [f, h, g, f, g, e]

		var vertices = new Array[Float]
		for v in vv do vertices.add_all v
		return vertices
	end
end

redef class Block
	#
	var side_texture: nullable Texture = null is writable

	# The 6 direct neighbors to `self`
	var neighbors: Array[Array[Float]] is lazy do
		return [
				[x-1.0, y, z],
		        [x+1.0, y, z],
		        [x, y-1.0, z],
		        [x, y+1.0, z],
		        [x, y, z-1.0],
		        [x, y, z+1.0]]
	end

	var visible_faces: Array[Bool] = [false, false, false, false, false, false]

	var faces = new Array[nullable VisibleFace].with_items(null, null, null, null, null, null)

	private fun add_faces_to(world: MineitWorld, display: GamnitDisplay)
	do
		var side = 0
		for coords in neighbors do

			var b = world.blocks[coords[0], coords[1], coords[2]]
			var exposed = b == null or not b.is_opaque
			visible_faces[side] = exposed

			var face = faces[side]
			if face == null then
				face = new VisibleFace(x, y, z, side, self)
				faces[side] = face

				face.color = color
				face.scale = scale
				face.category = category

				if side_texture == null or side == sys.top then
					face.texture = texture
				else
					face.texture = side_texture
					face.color = new Color.white
				end
			end

			if exposed and not display.visibles.has(face) then
				display.add(face)
			end

			side += 1
		end
	end

	private fun remove_faces_from(display: GamnitDisplay)
	do
		for f in [0..6[ do
			var face = faces[f]
			if face != null and display.visibles.has(face) then
				display.remove(face)
			end
		end
	end
end

redef class MineitWorld

	# Dimensions of the floating island
	redef var ground_cover = [-64..64]

	# Depth of the floating island
	redef var ground_depth = 8

	# Block list ...
	private var block_list = new HashSet[Block]

	# May this block be seen by the player?
	private fun is_hidden(block: Block): Bool
	do
		# Check whether all its sides are covered
		for coords in block.neighbors do
			var x = coords[0]
			var y = coords[1]
			var z = coords[2]

			var b = blocks[x, y, z]
			if b == null or not b.is_opaque then return false
		end

		return true
	end

	redef fun generate(display, app)
	do
		super
		app.consolidate_visibles
	end
end

redef class GamnitApp
	redef fun add(e)
	do
		var display = display
		assert display != null

		world.blocks[e.x, e.y, e.z] = e
		world.block_list.add e

		if consolidated then
			# Add only visible faces
			e.add_faces_to(world, display)
		end
	end

	redef fun remove(e)
	do
		var display = display
		assert display != null

		world.blocks.remove_at(e.x, e.y, e.z)
		world.block_list.remove e

		if consolidated then
			e.remove_faces_from display

			# All neighbors are now visible
			for coords in e.neighbors do
				var other = world.blocks[coords[0], coords[1], coords[2]]
				if other != null then
					# Add only visible faces
					# Sould we prevent double adding faces hidden behind transparent cubes?
					other.add_faces_to(world, display)
				end
			end
		end
	end

	#
	var consolidated = false

	#
	fun consolidate_visibles
	do
		consolidated = true

		for block in world.block_list do
			if not world.is_hidden(block) then
				block.add_faces_to(world, display.as(not null))
			end
		end
	end

	redef fun mine(block)
	do
		if block isa VisibleFace then
			super block.belongs_to
		else super block
	end
end
