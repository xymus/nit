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

# Gamnit display implementation for Android
#
# Generated APK files require OpenGL ES 2.0.
#
# This modules uses `android::native_app_glue` and the Android NDK.
module display_android is
	android_manifest """<uses-feature android:glEsVersion="0x00020000"/>"""
end

import ::android::game
intrude import android::load_image

private import gamnit::egl
intrude import textures

redef class GamnitDisplay

	redef fun setup
	do
		var native_display = egl_default_display
		var native_window = app.native_app_glue.window

		setup_egl_display native_display

		# We need 8 bits per color for selection by color
		select_egl_config(red_bits, green_bits, blue_bits, 0, 8, 0, 0)

		var format = egl_config.attribs(egl_display).native_visual_id
		native_window.set_buffers_geometry(0, 0, format)

		setup_egl_context native_window
	end

	redef fun close do close_egl
end

redef class TextureAsset

	private fun load_bitmap(asset_manager: AssetManager, path: String): NativeBitmap
	do
		return asset_manager.bitmap(path)
	end

	redef fun load_from_platform
	do
		jni_env.push_local_frame 4

		var asset_manager = app.asset_manager
		var bmp = load_bitmap(asset_manager, path)
		if bmp.is_java_null then
			error = new Error("Failed to load texture at '{path}'")
			jni_env.pop_local_frame
			return
		end

		var buf = bmp.copy_pixels(unmultiply=not premultiply_alpha)
		loaded = true
		width = bmp.width.to_f
		height = bmp.height.to_f
		var pixels = buf.native_array

		load_from_pixels(pixels, bmp.width, bmp.height, gl_RGBA)

		jni_env.pop_local_frame
	end
end

redef class Pointer
	# Disable out premultiply as we use only the one from Android
	redef fun premultiply_alpha(width, height) do end
end
