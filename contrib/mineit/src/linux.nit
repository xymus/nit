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

# Mineit on GNU/Linux
module linux

import ::linux
import mineit

redef class SDLDisplay
	redef fun enable_mouse_motion_events do return true
end

redef class App
	redef fun accept_event(event)
	do
		if event isa SDLMouseButtonEvent then
			# Mine on left click, place block on right block
			var x = event.x.to_i
			var y = event.y.to_i

			if event.pressed and
				(event.is_left_button or event.is_right_button) then

				act(x, y, event.is_left_button)
			end

			return true
		else if event isa SDLMouseMotionEvent then
			# Look around
			world_camera.turn(event.rel_x, event.rel_y)
			return true
		end

		return super
	end
end
