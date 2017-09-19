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

# Framework for 3D games in Nit
module depth

import flat
intrude import more_materials
import more_models
import model_dimensions
import particles
import selection
import shadow

redef class App

	redef fun on_create
	do
		super

		# Move the camera back a bit
		world_camera.reset_height(10.0)
		world_camera.near = 0.1

		# Cull the invisible triangles in the back of the geometries
		glCullFace gl_BACK

		# Prepare programs
		var programs = [versatile_program, normals_program, explosion_program, smoke_program, static_program, selection_program: GamnitProgram]
		for program in programs do
			program.compile_and_link
			var gamnit_error = program.error
			assert gamnit_error == null else print_error gamnit_error
		end
	end

	redef fun frame_core_draw(display) do frame_core_depth display

	# Draw all elements of `actors` and then call `frame_core_flat`
	protected fun frame_core_depth(display: GamnitDisplay)
	do
		frame_core_depth_clock.lapse

		# Compute shadows
		if light isa LightCastingShadows then
			frame_core_shadow_prep display
			perfs["gamnit depth shadows"].add frame_core_depth_clock.lapse
		end

		glViewport(0, 0, display.width, display.height)
		frame_core_dynamic_resolution_before display
		perfs["gamnit depth dynres"].add frame_core_depth_clock.lapse

		remap_actors
		perfs["gamnit depth remap_actors"].add frame_core_depth_clock.lapse

		frame_core_world_sprites display
		perfs["gamnit depth actors&sprites"].add frame_core_depth_clock.lapse

		# Toggle writing to the depth buffer for particles effects
		glDepthMask false
		for system in particle_systems do system.draw
		glDepthMask true
		perfs["gamnit depth particles"].add frame_core_depth_clock.lapse

		frame_core_ui_sprites display
		perfs["gamnit depth ui_sprites"].add frame_core_depth_clock.lapse

		frame_core_dynamic_resolution_after display

		# Debug, show the light point of view
		#frame_core_shadow_debug display
	end

	private var frame_core_depth_clock = new Clock
end
