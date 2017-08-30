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

module gl is
	android_manifest """<uses-feature android:glEsVersion="0x00020000" android:required="true" />"""
end

import glesv2

import native_gl
import ui

in "Java" `{
	import android.opengl.GLSurfaceView;
	import javax.microedition.khronos.opengles.GL10;
	import javax.microedition.khronos.egl.EGLConfig;
`}

class GLSurfaceView
	super View

	redef type NATIVE: Android_opengl_GLSurfaceView
	redef var native = (new Android_opengl_GLSurfaceView(app.native_activity)).new_global_ref

	fun renderer=(renderer: Renderer) do native.set_renderer renderer.native

	init
	do
		native.set_egl_context_client_version 2
		native.set_render_mode android_opengl_gl_surface_view_rendermode_when_dirty
	end
end

class Renderer

	var native: Android_opengl_GLSurfaceView_Renderer = create

	private fun create: Android_opengl_GLSurfaceView_Renderer
	import on_surface_created, on_draw_frame, on_surface_changed in "Java" `{
		Renderer_incr_ref(self);
		final int final_self = self;
		return new GLSurfaceView.Renderer() {
			public void onSurfaceCreated(GL10 unused, EGLConfig config) {
				Renderer_on_surface_created(final_self, unused, config);
			}

			public void onDrawFrame(GL10 unused) {
				Renderer_on_draw_frame(final_self, unused);
			}

			public void onSurfaceChanged(GL10 unused, int width, int height) {
				Renderer_on_surface_changed(final_self, unused, width, height);
			}

			// TODO destroy
		};
	`}

	fun on_surface_created(unused, config: JavaObject) do end

	fun on_draw_frame(unused: JavaObject) do end

	fun on_surface_changed(unused: JavaObject, width, height: Int) do end
end
