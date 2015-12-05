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

# Mineit on Android in virtual reality with Google Cardboard
module android_vr is
	app_version(0, 5, git_revision)
	app_name "Mineit VR"
	java_package "net.xymus.mineit_vr"
	android_manifest_activity """
		android:theme="@android:style/Theme.NoTitleBar.Fullscreen"
		android:screenOrientation="landscape""""
	min_api_version 19
end

import gamnit::android
import ::android::cardboard
import ::android::gamepad
import ::app::data_store
import ::android::shared_preferences

import vr
import optimized
import persistent_binary
import better_generation

redef fun save_file_path do return once "/mnt/sdcard/world.mineit".to_path

redef class MineitWorld
	redef var n_trees = 16

	redef fun ground_cover do return [-16..16]

	redef fun ground_depth do return 8
end

redef class SimpleCamera
	# Do not use `yaw` and `pitch`, the value will instead originate from the Cardboard API
	redef var rotation_matrix = new Matrix[Float].identity(4)

	# Get the angle value from the `rotation_matrix`
	redef fun pitch
	do
		var a = rotation_matrix[0, 1]
		var b = rotation_matrix[1, 1]
		return -atan2(a, b)
	end

	# Get the angle value from the `rotation_matrix`
	redef fun yaw
	do
		var a = rotation_matrix[2, 0]
		var b = rotation_matrix[2, 2]
		return -atan2(a, b)
	end
end

redef class GamnitApp

	# Use Cardboard's head tacking features
	var head_tracker: nullable NativeHeadTracker = null

	redef fun setup
	do
		super

		# Initialize the Cardboard head orientation tracker service
		head_tracker = new NativeHeadTracker(app.native_activity)
		head_tracker.neck_model_enabled = true
		head_tracker.start_tracking

		# Set a wide field of view
		camera.field_of_view_y = 1.0
	end

	# Do not show any UI
	redef fun setup_ui do end

	# We reuse this array to get the rotation matrix from the Java library
	private var java_rotation_matrix = new JavaFloatArray(16) is lazy

	redef fun frame_logic
	do
		# Extract rotation matrix from Cardboard
		head_tracker.last_head_view(java_rotation_matrix, 0)

		# Copy values from the Java array to our matrix
		for y in [0..4[ do
			for x in [0..4[ do
				camera.rotation_matrix[y, x] = java_rotation_matrix[y*4+x]
			end
		end

		super
	end

	redef fun accept_event(event)
	do
		if event isa AndroidPointerEvent then
			## Mouse support (probably over bluetooth) for people without a compatible gamepad
			#if event.pressed then # TODO use just_went_down
				# Move forward
				#display.keys.downs.add "w"
			#else # event.depressed
				#if display.keys.downs.has("w") then display.keys.downs.remove "w"
			#end

			return false
		end

		# Center of the screen
		var cx = display.width/2
		var cy = display.height/2

		# Gamepad support
		if event isa AndroidKeyEvent then
			if event.is_a then
				# mine
				if event.is_down then act(cx, cy, true)
				return true
			else if event.is_b then
				# place
				if event.is_down then act(cx, cy, false)
				return true
			else if event.is_dpad then
				# move
				var letter = null
				if event.is_dpad_up then letter = "w"
				if event.is_dpad_down then letter = "s"
				if event.is_dpad_left then letter = "a"
				if event.is_dpad_right then letter = "d"
				assert letter != null

				if event.is_down then
					display.keys.downs.add letter
				else
					display.keys.downs.remove letter
				end
			else if event.is_select then
				if event.is_up then return false

				print "Loading result {load}"
				print sys.time_stats
				return true
			else if event.is_start then
				if event.is_up then return false

				save
				return true
			else if event.is_back_key then
				# Catch all back keys so it doesn't leave our app
				print sys.time_stats
				return true
			end
		end

		return super
	end
end

redef class App
	redef fun pause
	do
		if gamnit == null then return

		var tracker = gamnit.head_tracker
		if tracker != null then tracker.stop_tracking
	end

	redef fun resume
	do
		if gamnit == null then return

		var tracker = gamnit.head_tracker
		if tracker != null then tracker.start_tracking
	end

	redef fun gained_focus
	do
		super

		#native_activity.immersive
	end
end

redef class NativeActivity

	#
	fun immersive in "Java" `{

		final android.app.Activity final_recv = recv;

		recv.runOnUiThread(new Runnable() {
			@Override
			public void run()  {
		final_recv.getWindow().getDecorView().setSystemUiVisibility(android.view.View.SYSTEM_UI_FLAG_HIDE_NAVIGATION |
			android.view.View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY | android.view.View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN);
			}
		});
	`}
end
