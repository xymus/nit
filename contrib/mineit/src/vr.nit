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

# Portable virtual reality display for mineit
module vr

import mineit
intrude import gamnit::glesv2_display

redef class GamnitApp
	redef fun frame_logic
	do
		super

		#
		display.vr_camera = camera
	end
end

redef class SimpleCamera
	private fun mvp_matrix_eye(diff: Float): Matrix[Float]
	do
		var view = new Matrix[Float].identity(4)

		# Translate the world away from the camera
		view.translate(-position.x/2.0, -position.y/2.0, -position.z/2.0)

		# Rotate the camera, first by looking left or right, then up or down
		view = view * rotation_matrix

		# Apply eye transformation
		var translation = new Matrix[Float].identity(4)
		translation.translate(diff, 0.0, 0.0)
		view = view * translation

		# Use a projection matrix with a depth
		var projection = new Matrix[Float].perspective(pi*field_of_view_y/2.0,
			display.aspect_ratio, near, far)

		return view * projection
	end

	# Distance between the eyes
	var eye_separation: Float = 0.03125/2.0

	fun mvp_matrix_left: Matrix[Float]
	do
		return mvp_matrix_eye(eye_separation)
	end

	fun mvp_matrix_right: Matrix[Float]
	do
		return mvp_matrix_eye(-1.0 * eye_separation)
	end
end

redef class MineitWorld
	redef fun collision_range do return 0.25
end

redef class GamnitDisplay

	#
	var vr_camera: nullable SimpleCamera = null

	# The aspect ration (in each eye) is half of the screen
	redef fun aspect_ratio do return super / 2.0

	redef fun draw_all_the_things
	do
		# If VR is not ready, use standard implementation
		if vr_camera == null then
			super
			return
		end

		# Clear screen (same as in standard implementation)
		var back = background_color
		if back != null then
			gl.clear_color(back.r, back.g, back.b, back.a)
		end
		gl.clear((new GLBuffer).color.depth)

		# View matrix from head movement
		#var head_projection = vr_camera.mvp_matrix

		# Move the camera back a bit to see less through walls
		#var center_projection = new Matrix[Float].identity(4)
		#center_projection.translate(0.0, 0.0, 0.0) #-0.01)

		# Left eye
		gl.viewport(0, 0, width/2, height)
		#var eye_projection = center_projection.copy
		var eye_projection = vr_camera.mvp_matrix_left
		#eye_projection.translate(eye_separation, 0.0, 0.0)
		projection_matrix = eye_projection# * head_projection
		draw_all_the_things_core # Normal drawing

		# Right eye
		gl.viewport(width/2, 0, width/2, height)
		#eye_projection = center_projection.copy
		eye_projection = vr_camera.mvp_matrix_right
		#eye_projection.translate(-eye_separation, 0.0, 0.0)
		projection_matrix = eye_projection# * head_projection
		draw_all_the_things_core # Normal drawing

		# Mark selection result as dirty
		selection_calculated = false

		# Check for lingering errors
		assert_no_gl_error

		# We reset the viewport for selection
		gl.viewport(0, 0, width, height)
	end
end
