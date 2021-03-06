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

# More implementations of `Light`
module more_lights

import depth_core

# TODO
#class PointLight
#class Spotlight

# Sun-like light projecting parallel rays
class ParallelLight
	super LightCastingShadows

	# Angle to the light source, around the X axis
	var pitch = 0.0 is writable

	# Angle to the light source, around the Y axis
	var yaw = 0.0 is writable

	# Depth texture width, in world coordinates
	var width = 100.0 is writable

	# Depth texture height, in world coordinates
	var height = 100.0 is writable

	# Viewport depth, centered on `app.world_camera`
	var depth = 500.0 is writable

	redef var camera = new ParallelLightCamera(app.display.as(not null), self) is lazy
end

private class ParallelLightCamera
	super Camera

	var light: ParallelLight

	# Rotation matrix produced by the current rotation of the camera
	fun rotation_matrix: Matrix
	do
		var view = new Matrix.identity(4)
		view.rotate(light.yaw,   0.0, 1.0, 0.0)
		view.rotate(light.pitch, 1.0, 0.0, 0.0)
		return view
	end

	redef fun mvp_matrix
	do
		# TODO cache

		var near = -light.depth/2.0
		var far = light.depth/2.0

		var view = new Matrix.identity(4)
		view.translate(-position.x, -position.y, -position.z)
		view = view * rotation_matrix
		var projection = new Matrix.orthogonal(-light.width/2.0, light.width/2.0,
		                                       -light.height/2.0, light.height/2.0,
		                                       near, far)
		return view * projection
	end
end
