# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2011-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

#
module persistent

import json::dynamic

import mineit
intrude import optimized

private fun save_file_path: Path do return once "save.mineit".to_path

redef class MineitWorld
	fun to_json: String
	do
		var coords = new Array[Float]
		var textures = new Array[Float]
		var colors = new Array[Float]

		for block in block_list do
			coords.add block.x
			coords.add block.y
			coords.add block.z

			var texture = block.texture
			assert texture isa Subtexture
			textures.add texture.source_left
			textures.add texture.source_top
			textures.add texture.source_right
			textures.add texture.source_bottom

			colors.add block.color.r
			colors.add block.color.g
			colors.add block.color.b
			colors.add block.color.a
		end

		return """
{
    "coords": {{{coords.to_json}}},
    "textures": {{{textures.to_json}}},
    "colors": {{{colors.to_json}}}
}"""
	end
end

redef class SimpleCamera
	fun to_json: String do return """
{
    "px": {{{position.x.to_json}}},
    "py": {{{position.y.to_json}}},
    "pz": {{{position.z.to_json}}},
    "pitch": {{{pitch.to_json}}},
    "yaw": {{{yaw.to_json}}}
}"""

	fun update_from_json(json: JsonValue)
	do
		self.position.x = json["px"].to_f
		self.position.y = json["py"].to_f
		self.position.z = json["pz"].to_f
		self.pitch = json["pitch"].to_f
		self.yaw = json["yaw"].to_f
	end
end

redef class GamnitApp

	private fun save
	do
		var s = save_file_path.open_wo
		s.write to_json
		s.close
	end

	#
	fun to_json: String do return """
{
"world": {{{world.to_json}}},
"camera": {{{camera.to_json}}}
}"""

	private fun load: Bool
	do
		if not save_file_path.exists then return false

		var content = save_file_path.read_all
		return load_from_json(content)
	end

	fun load_from_json(content: String): Bool
	do
		var json = content.to_json_value

		if json.is_error then
			print json.to_error
			return false
		end

		# Clean old world
		world = new MineitWorld
		setup_ui

		self.update_world_from_json json["world"]
		self.camera.update_from_json json["camera"]

		return true
	end

	fun update_world_from_json(json: JsonValue)
	do
		consolidated = false
		display.visibles.clear

		var coords = json["coords"].to_a
		var textures = json["textures"].to_a
		var colors = json["colors"].to_a

		for c in [0..coords.length/3[ do
			var block = new Block(coords[c*3].to_f, coords[c*3+1].to_f, coords[c*3+2].to_f)
			add block

			block.texture = terrain_texture.as(GamnitGLTexture).subtexture_by_sides(
				textures[c*4].to_f, textures[c*4+1].to_f,
				textures[c*4+2].to_f, textures[c*4+3].to_f)

			block.color = new Color(colors[c*4].to_f, colors[c*4+1].to_f, colors[c*4+2].to_f, 1.0)
			block.color.a = colors[c*4+3].to_f
		end

		consolidate_visibles
	end

	#
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

redef universal Float
	# Use a higher precision when saving floats
	fun to_json: String
	do
		#if self % 1.0 == 0.0 then return to_i.to_s
		var str = to_precision(6)
		var e = str.length - 1

		while e > 0 and str.chars[e] == '0' do e -= 1

		return str.substring(0, e)
	end
end

redef class Array[E]
	#
	fun to_json: String do return "[{join(",")}]"
end
