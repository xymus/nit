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

# Tolerated bug: Falling into a block may circumvent the collision detection.
module mineit

import performance_analysis
import more_collections

import gamnit::depth
#import gamnit::standalone
#import gamnit::visibles
#intrude import gamnit::display
import gamnit::limit_fps

import gamnit::keys

import gen::tiles

# A visible block in game
class Block
	super Actor
	#super Selectable

	# Is `self` fully opaque?
	var is_opaque = true is writable

	init(model: Model, x, y, z: Float)
	do
		# Reduce the scale ever so slightly that it doesn't overlap its neighbors
		super(model, new Point3d[Float](x, y, z))
		scale = 0.9999
	end
end

# A Mineit world, mostly make of `blocks`
class MineitWorld
	# Blocks in this world
	var blocks = new HashMap3[Float, Float, Float, Block]

	# Dimensions of the floating island
	var ground_cover: Range[Int] = [-5..5]
	#var ground_cover: Range[Int] = [-10..10]

	# Depth of the floating island
	var ground_depth = 12

	# Player/camera speed
	var speed = 3.0

	# Speed of the falling player
	var falling_speed = 0.0

	# Acceleration applied to the falling player
	var gravity = 0.00981

	# Reachable range of actions
	var action_reach = 5.0

	# Generate the default world
	fun generate(display: GamnitDisplay)
	do
		# Rock brick
		for h in 3.times do
			var block = new Block(app.model_placable, 0.0, -1.0+h.to_f, 0.0)
			app.add block
		end

		# Glass (ish)
		var block = new Block(app.model_glass, 1.0, 0.0, 0.0)
		block.is_opaque = false
		app.add block

		# Gold top
		block = new Block(app.model_gold, 0.0, 2.0, 0.0)
		block.scale = 0.9
		block.is_opaque = false
		app.add block

		# planks
		block = new Block(app.model_planks, 1.0, -1.0, 0.0)
		app.add block

		# diamond
		#block = new Block(app.model_diamond, 1.0, 0.0, 1.0)
		#app.add block

		# Some box
		block = new Block(app.model_placable, 1.0, -1.0, 1.0)
		app.add block

		# Ground
		for x in ground_cover do
			for z in ground_cover do
				for y in [0..ground_depth] do
					var model
					if y == 0 then
						model = app.model_grass
					else if y > 4 then
						var r = 20.rand
						if r == 0 then
							model = app.model_gold
						else if r == 1 then
							model = app.model_coal
						else if r == 2 then
							model = app.model_diamond
						else
							model = app.model_cobble
						end
					else
						model = app.model_dirt
					end
					app.add new Block(model, x.to_f, -2.0-y.to_f, z.to_f)
				end
			end
		end

		# Place many trees
		for pos in [[3, 5], [4, -4], [-2, 8], [-5, -4],
			[8, 2], [10, 7], [8, -6], [10, -2],
			[-4, 3], [-8, 10], [-7, -8], [-2, -9],
			[1, -6], [-12, 0]] do

			# Leaves
			for x in [-1..1] do
				for y in [-1..1] do
					for z in [-1..1] do
						block = new Block(app.model_leaves, (x+pos[0]).to_f, 3.0+y.to_f, (z + pos[1]).to_f)
						block.is_opaque = false
						app.add block
					end
				end
			end

			# Trunc
			for y in [-1..1] do
				block = new Block(app.model_trunk, pos[0].to_f, y.to_f, pos[1].to_f)
				app.add block
			end
		end
	end

	fun collision_range: Float do return 0.2

	# Get the block, if any, in a square around `fx`, `fy` and `fz`
	#
	# It will first test the center position, then it will look at 4 corners
	# around it.
	fun block_within(fx, fy, fz: Float): nullable Block
	do
		var y = fy.round

		var block = blocks[fx.round, y, fz.round]
		if block != null then return block

		# Try corners
		var range = collision_range
		for x in [(fx+range).round, (fx-range).round] do
			for z in [(fz+range).round, (fz-range).round] do
				block = blocks[x, y, z]
				if block != null then return block
			end
		end

		return null
	end
end

redef class App
	# Mineit world
	var world: MineitWorld is writable

	private var splash_texture = new Texture("splash.png")

	private var crosshair_texture = new Texture("crosshair.png")

	private var block_mesh = new Cube

	var tiles_spritesheet = new Tiles
	var model_grass = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.grass_top))
	var model_dirt = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.dirt))
	var model_cobble = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.stone))
	var model_gold = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.stone_gold))
	var model_coal = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.stone_coal))
	var model_diamond = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.stone_diamond))
	var model_glass = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.glass_frame))
	var model_planks = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.wood))
	var model_placable = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.brick_grey))
	var model_leaves = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.leaves_transparent))
	var model_trunk = new LeafModel(block_mesh, tex_to_mat(tiles_spritesheet.trunk_side))

	private fun tex_to_mat(texture: Texture): Material
	do
		var mat = new TexturedMaterial([0.8, 0.8, 0.8, 1.0], [0.0]*4, [0.0]*4)
		#mat.diffuse_texture = texture
		mat.ambient_texture = texture
		return mat
	end

	# Spawn or respawn the local player
	fun spawn
	do
		var x = 2.0
		var y = 0.0
		var z = -1.0
		while world.blocks[x, y, z] != null or
			world.blocks[x, y+1.0, z] != null do

			y += 1.0
		end
		world.falling_speed = 0.0
		world_camera.position = new Point3d[Float](x, y, z)
	end

	redef fun on_create
	do
		super

		tiles_spritesheet.root_texture.pixelated = true

		var display = display
		assert display != null

		show_splash_screen splash_texture

		for texture in all_root_textures do texture.load

		world = new MineitWorld
		world.generate display
		spawn

		display.lock_cursor = true
		display.show_cursor = false
		glClearColor(60.0/256.0, 60.0/256.0, 224.0/256.0, 1.0)
		light.position.x = 1000.0
		light.position.z = 500.0

		setup_ui
		setup_decor

		glClearColor(60.0/256.0, 60.0/256.0, 224.0/256.0, 1.0)
	end

	# Add untouchable background elements
	fun setup_decor
	do
		# Sun (no texture, color only)
		var sun_material = new SmoothMaterial([1.0, 1.0, 0.0, 1.0], [0.0]*4, [0.0]*4)
		var model_sun = new LeafModel(block_mesh, sun_material)
		var block = new Block(model_sun, -100.0, 30.0, 0.0)
		block.scale = 10.0
		app.actors.add block

		# Sun halo
		var halo_material = new SmoothMaterial([1.0, 1.0, 0.0, 0.2], [0.0]*4, [0.0]*4)
		var model_halo = new LeafModel(block_mesh, halo_material)
		block = new Block(model_halo, -100.0, 30.0, 0.0)
		block.scale = 15.0
		app.actors.add block
	end

	# Setup UI elements
	fun setup_ui
	do
		# Add a crosshair at the center of the screen
		app.ui_sprites.add new Sprite(crosshair_texture, ui_camera.center)
	end

	redef fun update(dt)
	do
		var stat_clock = new Clock

		# Set aside the current position to revert to it on collision
		var p = world_camera.position
		var last_position = new Point3d[Float](p.x, p.y, p.z)

		# Inputs
		for key in app.pressed_keys do
			if key == "w" then
				world_camera.move(0.0, 0.0, world.speed*dt)
			else if key == "s" then
				world_camera.move(0.0, 0.0, -world.speed*dt)
			else if key == "a" then
				world_camera.move(-world.speed*dt, 0.0, 0.0)
			else if key == "d" then
				world_camera.move(world.speed*dt, 0.0, 0.0)
			end
		end
		sys.perfs["inputs"].add stat_clock.lapse

		# Collision detection
		detect_collision last_position
		sys.perfs["collision"].add stat_clock.lapse
	end

	# Detect and react to collisions between the `world_camera` and the `world.blocks`
	#
	# Will revert to `last_position` if there is a collision.
	fun detect_collision(last_position: Point3d[Float])
	do
		# Detect collision, fall and jumps
		var x = world_camera.position.x
		var y = world_camera.position.y
		var z = world_camera.position.z

		var block_head = world.block_within(x, y, z)
		if block_head != null then
			# Head blocked, try moving only on z
			z = last_position.z
			block_head = world.block_within(x, y, z)

			if block_head != null then
				# Try moving only on x
				z = world_camera.position.z
				x = last_position.x
				block_head = world.block_within(x, y, z)

				if block_head != null then
					# Fully blocked
					world_camera.position = last_position
					return
				end
				world_camera.position.x = x
			end
			world_camera.position.z = z
		end

		# Step on a block?
		var block_feet = world.block_within(x, y-1.0, z)
		if block_feet != null then
			var block_over = world.block_within(x, y+1.0, z)
			if block_over != null then
				# Block over head, cannot go up, cancel
				world_camera.position = last_position
			else
				world_camera.position.y += 1.0
			end
			return
		end

		var block_under = world.block_within(x, y-2.0, z)
		if block_under != null then
			var ty = block_under.center.y + 2.0
			if world_camera.position.y > ty then
				# Fall
				world.falling_speed += world.gravity
				world_camera.position.y = ty.max(world_camera.position.y - world.falling_speed)
			end
		else if world_camera.position.y < -64.0 then
			# Falling out of the world, reset player/camera position
			spawn
		else # block == null
			# Nothing under the player, fall!
			world.falling_speed += world.gravity
			world_camera.position.y -= world.falling_speed
		end
	end

	fun intersects(x, y, z: Int): nullable Block
	do
		var block = world.blocks[x.to_f, y.to_f, z.to_f]
		if block == null then return null

		var dx = x.to_f - world_camera.position.x
		dx = dx.abs - 0.5
		var oppx = world_camera.yaw.tan * dx + world_camera.position.x
		#if oppx <= block.x

		return null
	end

	# Act on block visible at `x, y` on screen
	#
	# If `mine` break block, otherwise place a new block on top of selected.
	fun act(x, y: Int, mine: Bool)
	do
		#if true then return

		# HACK
		#display.selection_camera = world_camera.position

		var selected = app.visible_at(x, y)

		#var selected = new Block(model_grass, 0.0, 0.0, 0.0)
		#var selected = visible_in_center
		print selected or else "null"
		if selected != null and app.actors.has(selected) then

			# Is it in action range?
			var d2 = (selected.center.x - world_camera.position.x).to_f.pow(2.0) +
				(selected.center.y - world_camera.position.y).to_f.pow(2.0) +
				(selected.center.z - world_camera.position.z).to_f.pow(2.0)
			if d2.sqrt > world.action_reach then return

			var sx = selected.center.x.to_f
			var sy = selected.center.y.to_f
			var sz = selected.center.z.to_f

			if mine then
				# Mine block
				if selected isa Block then
					self.mine selected
				end
			else
				# Is the spot above `selected` empty?
				var occupant = world.blocks[sx, sy+1.0, sz]
				if occupant != null then return

				# Place a new block!
				var block = new Block(model_placable, sx, sy+1.0, sz)
				place block
			end
		end
	end

	# Mine `block` and remove it from `world`
	fun mine(block: Block) do remove block

	# Place `block` in `world`
	fun place(block: Block)
	do
		add block
	end

	redef fun accept_event(event)
	do
		if event isa QuitEvent then
			quit
		else if event isa KeyEvent then
			if event.name == "q" and event.is_down then
				quit
			end
		end

		return super
	end

	# Quit the game
	fun quit
	do
		print sys.perfs
		exit 0
	end

	# Add a block to the `world` and the `display`
	fun add(e: Block)
	do
		actors.add e
		#print "add {e.center.x}, {e.center.y}, {e.center.z}"
		world.blocks[e.center.x, e.center.y, e.center.z] = e
	end

	# Remove a block from the `world` and the `display`
	fun remove(e: Block)
	do
		actors.remove e
		world.blocks.remove_at(e.center.x, e.center.y, e.center.z)
	end
end

redef class Range[E]
	# Step appropriately to go from `first` to `last`
	#
	# ~~~
	# assert [1..3].smart_step.to_a == [1, 2, 3]
	# assert [3..1].smart_step.to_a == [3, 2, 1]
	# ~~~
	fun smart_step: Iterator[E]
	do
		var step = 1
		if first > last then step = -1
		return self.step(step)
	end
end

redef universal Int
	# Is `self` in between `a` and `b`?
	#
	# ~~~
	# assert 1.in_between_floats(0.0, 2.0)
	# assert 1.in_between_floats(2.0, 0.0)
	# assert not 1.in_between_floats(2.0, 4.0)
	# ~~~
	fun in_between_floats(a, b: Float): Bool
	do
		var f = to_f
		if a < b then return a.floor - 1.0 < f and f < b.ceil
		return a.ceil > f and f > b.floor - 1.0
	end
end
