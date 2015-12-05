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

# World persistence using a binary file
module persistent_binary is android_manifest """
	<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE"/>
	<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>
"""

import binary
import ::android::aware

import mineit
intrude import optimized

# Path to the save file
fun save_file_path: Path do return once "world.mineit".to_path

# Persistence version
fun persistence_version: Int do return 1

redef class MineitWorld

	# Save world state to the binary `stream`
	fun save_to_binary(stream: BinaryWriter)
	do
		stream.write_uint32 block_list.length

		for block in block_list do
			stream.write_float block.x
			stream.write_float block.y
			stream.write_float block.z
			stream.write_bool block.is_opaque

			var texture = block.texture
			assert texture isa Subtexture
			stream.write_float texture.source_left
			stream.write_float texture.source_top
			stream.write_float texture.source_right
			stream.write_float texture.source_bottom

			# Do not write the white color
			var c = block.color
			var is_white = c.r == 1.0 and c.g == 1.0 and c.b == 1.0 and c.a == 1.0
			stream.write_bool is_white
			if is_white then continue

			stream.write_float block.color.r
			stream.write_float block.color.g
			stream.write_float block.color.b
			stream.write_float block.color.a
		end
	end
end

redef class SimpleCamera

	# Save camera state to the binary `stream`
	fun save_to_binary(stream: BinaryWriter)
	do
		stream.write_float position.x
		stream.write_float position.y
		stream.write_float position.z
		stream.write_float pitch
		stream.write_float yaw
	end

	# Load camera state from the binary `stream`
	fun load_from_binary(stream: BinaryReader)
	do
		self.position.x = stream.read_float
		self.position.y = stream.read_float
		self.position.z = stream.read_float
		self.pitch = stream.read_float
		self.yaw = stream.read_float
	end
end

redef class GamnitApp

	# Save the application state to the file at `save_file_path`
	#
	# Return `true` on success.
	fun save: Bool
	do
		var clock = new Clock

		var s = new BinaryWriter.open(save_file_path.to_s)
		save_to_binary s
		s.close

		sys.time_stats["save"].add clock.lapse

		var error  = s.last_error
		if error != null then
			print error
			return false
		end

		return true
	end

	# Save the application state to the binary `stream`
	fun save_to_binary(stream: BinaryWriter)
	do
		stream.write_uint8 persistence_version

		world.save_to_binary stream
		camera.save_to_binary stream
	end

	# Load the application state from the file at `save_file_path`
	#
	# Return `true` on success.
	fun load: Bool
	do
		if not save_file_path.exists then return false

		var clock = new Clock

		var s = new BinaryReader.open(save_file_path.to_s)
		load_from_binary s
		s.close

		sys.time_stats["load"].add clock.lapse

		var error  = s.last_error
		if error != null then
			print error
			return false
		end

		return true
	end

	# Load the application state from the binary `stream`
	fun load_from_binary(stream: BinaryReader): Bool
	do
		var version = stream.read_uint8
		if version != persistence_version then return false

		load_world_from_binary stream
		camera.load_from_binary stream

		return true
	end

	# Load world state from the binary `stream`
	fun load_world_from_binary(stream: BinaryReader)
	do
		consolidated = false

		display.visibles.clear
		setup_ui
		setup_decor

		world.blocks.clear
		world.block_list.clear

		var n_blocks = stream.read_uint32

		var clock = new Clock

		for n in n_blocks.times do
			var x = stream.read_float
			var y = stream.read_float
			var z = stream.read_float

			var block = new Block(x, y, z)
			add block

			block.is_opaque = stream.read_bool

			var tl = stream.read_float
			var tt = stream.read_float
			var tr = stream.read_float
			var tb = stream.read_float

			block.texture = terrain_texture.as(GamnitGLTexture).subtexture_by_sides(tl, tt, tr, tb)

			var is_white = stream.read_bool
			if is_white then
				block.color = new Color.white
			else
				var cr = stream.read_float
				var cg = stream.read_float
				var cb = stream.read_float
				var ca = stream.read_float
				block.color = new Color(cr, cg, cb, ca)
			end

			sys.time_stats["load block"].add clock.lapse
		end

		consolidate_visibles
	end

	# Detect the `k` and `l` keys press events to save and load
	redef fun accept_event(event)
	do
		if event isa KeyEvent and event.is_down then
			display.keys.register event # HACK
			if event.name == "k" then
				# Save
				save
				return true
			else if event.name == "l" then
				# Load
				if not load then print "Loading failed"
				return true
			end
		end

		return super
	end
end
