# This file is part of NIT (http://www.nitlanguage.org).
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

# This code has been generated using `jwrapper`
module native_gl is no_warning("useless-superclass")

import java

import native_ui

# Java class: android.opengl.GLSurfaceView$Renderer
extern class Android_opengl_GLSurfaceView_Renderer in "Java" `{ android.opengl.GLSurfaceView$Renderer `}
	super JavaObject

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_opengl_GLSurfaceView_Renderer_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.opengl.GLSurfaceView
extern class Android_opengl_GLSurfaceView in "Java" `{ android.opengl.GLSurfaceView `}
	# super Android_view_SurfaceView
	# super Android_view_SurfaceHolder_Callback
	super NativeView

	# Java implementation:  android.opengl.GLSurfaceView.setGLWrapper(android.opengl.GLSurfaceView.GLWrapper)
	fun set_gl_wrapper(arg0: Android_opengl_GLSurfaceView_GLWrapper) in "Java" `{
		self.setGLWrapper(arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setDebugFlags(int)
	fun set_debug_flags(arg0: Int) in "Java" `{
		self.setDebugFlags((int)arg0);
	`}

	# Java implementation: int android.opengl.GLSurfaceView.getDebugFlags()
	fun get_debug_flags: Int in "Java" `{
		return self.getDebugFlags();
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setRenderer(android.opengl.GLSurfaceView.Renderer)
	fun set_renderer(arg0: Android_opengl_GLSurfaceView_Renderer) in "Java" `{
		self.setRenderer(arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setEGLContextFactory(android.opengl.GLSurfaceView.EGLContextFactory)
	fun set_egl_context_factory(arg0: Android_opengl_GLSurfaceView_EGLContextFactory) in "Java" `{
		self.setEGLContextFactory(arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setEGLWindowSurfaceFactory(android.opengl.GLSurfaceView.EGLWindowSurfaceFactory)
	fun set_egl_window_surface_factory(arg0: Android_opengl_GLSurfaceView_EGLWindowSurfaceFactory) in "Java" `{
		self.setEGLWindowSurfaceFactory(arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setEGLConfigChooser(android.opengl.GLSurfaceView.EGLConfigChooser)
	fun set_egl_config_chooser_GLSurfaceViewEGLConfigChooser(arg0: Android_opengl_GLSurfaceView_EGLConfigChooser) in "Java" `{
		self.setEGLConfigChooser(arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setEGLConfigChooser(boolean)
	fun set_egl_config_chooser_boolean(arg0: Bool) in "Java" `{
		self.setEGLConfigChooser(arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setEGLConfigChooser(int, int, int, int, int, int)
	fun set_egl_config_chooser_int_int_int_int_int_int(arg0: Int, arg1: Int, arg2: Int, arg3: Int, arg4: Int, arg5: Int) in "Java" `{
		self.setEGLConfigChooser((int)arg0, (int)arg1, (int)arg2, (int)arg3, (int)arg4, (int)arg5);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setEGLContextClientVersion(int)
	fun set_egl_context_client_version(arg0: Int) in "Java" `{
		self.setEGLContextClientVersion((int)arg0);
	`}

	# Java implementation:  android.opengl.GLSurfaceView.setRenderMode(int)
	fun set_render_mode(arg0: Int) in "Java" `{
		self.setRenderMode((int)arg0);
	`}

	# Java implementation: int android.opengl.GLSurfaceView.getRenderMode()
	fun get_render_mode: Int in "Java" `{
		return self.getRenderMode();
	`}

	# Java implementation:  android.opengl.GLSurfaceView.requestRender()
	fun request_render in "Java" `{
		self.requestRender();
	`}

	# Java implementation:  android.opengl.GLSurfaceView.surfaceCreated(android.view.SurfaceHolder)
#	fun surface_created(arg0: Android_view_SurfaceHolder) in "Java" `{
#		self.surfaceCreated(arg0);
#	`}

	# Java implementation:  android.opengl.GLSurfaceView.surfaceDestroyed(android.view.SurfaceHolder)
#	fun surface_destroyed(arg0: Android_view_SurfaceHolder) in "Java" `{
#		self.surfaceDestroyed(arg0);
#	`}

	# Java implementation:  android.opengl.GLSurfaceView.surfaceChanged(android.view.SurfaceHolder, int, int, int)
#	fun surface_changed(arg0: Android_view_SurfaceHolder, arg1: Int, arg2: Int, arg3: Int) in "Java" `{
#		self.surfaceChanged(arg0, (int)arg1, (int)arg2, (int)arg3);
#	`}

	# Java implementation:  android.opengl.GLSurfaceView.onPause()
	fun on_pause in "Java" `{
		self.onPause();
	`}

	# Java implementation:  android.opengl.GLSurfaceView.onResume()
	fun on_resume in "Java" `{
		self.onResume();
	`}

	# Java implementation:  android.opengl.GLSurfaceView.queueEvent(java.lang.Runnable)
#	fun queue_event(arg0: Java_lang_Runnable) in "Java" `{
#		self.queueEvent(arg0);
#	`}

	# Java constructor: android.opengl.GLSurfaceView
	new (context: NativeContext) in "Java" `{
		return new android.opengl.GLSurfaceView(context);
	`}

	# Java constructor: android.opengl.GLSurfaceView
#	new from_Context_AttributeSet(a: NativeContext, b: Android_util_AttributeSet) in "Java" `{
#		return new android.opengl.GLSurfaceView(a, b);
#	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_opengl_GLSurfaceView_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java getter: android.opengl.GLSurfaceView.RENDERMODE_WHEN_DIRTY
fun android_opengl_gl_surface_view_rendermode_when_dirty: Int in "Java" `{
	return android.opengl.GLSurfaceView.RENDERMODE_WHEN_DIRTY;
`}

# Java getter: android.opengl.GLSurfaceView.RENDERMODE_CONTINUOUSLY
fun android_opengl_gl_surface_view_rendermode_continuously: Int in "Java" `{
	return android.opengl.GLSurfaceView.RENDERMODE_CONTINUOUSLY;
`}

# Java getter: android.opengl.GLSurfaceView.DEBUG_CHECK_GL_ERROR
fun android_opengl_gl_surface_view_debug_check_gl_error: Int in "Java" `{
	return android.opengl.GLSurfaceView.DEBUG_CHECK_GL_ERROR;
`}

# Java getter: android.opengl.GLSurfaceView.DEBUG_LOG_GL_CALLS
fun android_opengl_gl_surface_view_debug_log_gl_calls: Int in "Java" `{
	return android.opengl.GLSurfaceView.DEBUG_LOG_GL_CALLS;
`}

# Java class: android.opengl.GLSurfaceView$GLWrapper
extern class Android_opengl_GLSurfaceView_GLWrapper in "Java" `{ android.opengl.GLSurfaceView$GLWrapper `}
	super JavaObject

	# Java implementation: javax.microedition.khronos.opengles.GL android.opengl.GLSurfaceView$GLWrapper.wrap(javax.microedition.khronos.opengles.GL)
#	fun wrap(arg0: Javax_microedition_khronos_opengles_GL): Javax_microedition_khronos_opengles_GL in "Java" `{
#		return self.wrap(arg0);
#	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_opengl_GLSurfaceView_GLWrapper_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.opengl.GLSurfaceView$EGLConfigChooser
extern class Android_opengl_GLSurfaceView_EGLConfigChooser in "Java" `{ android.opengl.GLSurfaceView$EGLConfigChooser `}
	super JavaObject

	# Java implementation: javax.microedition.khronos.egl.EGLConfig android.opengl.GLSurfaceView$EGLConfigChooser.chooseConfig(javax.microedition.khronos.egl.EGL10, javax.microedition.khronos.egl.EGLDisplay)
#	fun choose_config(arg0: Javax_microedition_khronos_egl_EGL10, arg1: Javax_microedition_khronos_egl_EGLDisplay): Javax_microedition_khronos_egl_EGLConfig in "Java" `{
#		return self.chooseConfig(arg0, arg1);
#	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_opengl_GLSurfaceView_EGLConfigChooser_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.opengl.GLSurfaceView$EGLContextFactory
extern class Android_opengl_GLSurfaceView_EGLContextFactory in "Java" `{ android.opengl.GLSurfaceView$EGLContextFactory `}
	super JavaObject

	# Java implementation: javax.microedition.khronos.egl.EGLContext android.opengl.GLSurfaceView$EGLContextFactory.createContext(javax.microedition.khronos.egl.EGL10, javax.microedition.khronos.egl.EGLDisplay, javax.microedition.khronos.egl.EGLConfig)
#	fun create_context(arg0: Javax_microedition_khronos_egl_EGL10, arg1: Javax_microedition_khronos_egl_EGLDisplay, arg2: Javax_microedition_khronos_egl_EGLConfig): Javax_microedition_khronos_egl_EGLContext in "Java" `{
#		return self.createContext(arg0, arg1, arg2);
#	`}

	# Java implementation:  android.opengl.GLSurfaceView$EGLContextFactory.destroyContext(javax.microedition.khronos.egl.EGL10, javax.microedition.khronos.egl.EGLDisplay, javax.microedition.khronos.egl.EGLContext)
#	fun destroy_context(arg0: Javax_microedition_khronos_egl_EGL10, arg1: Javax_microedition_khronos_egl_EGLDisplay, arg2: Javax_microedition_khronos_egl_EGLContext) in "Java" `{
#		self.destroyContext(arg0, arg1, arg2);
#	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_opengl_GLSurfaceView_EGLContextFactory_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.opengl.GLSurfaceView$EGLWindowSurfaceFactory
extern class Android_opengl_GLSurfaceView_EGLWindowSurfaceFactory in "Java" `{ android.opengl.GLSurfaceView$EGLWindowSurfaceFactory `}
	super JavaObject

	# Java implementation: javax.microedition.khronos.egl.EGLSurface android.opengl.GLSurfaceView$EGLWindowSurfaceFactory.createWindowSurface(javax.microedition.khronos.egl.EGL10, javax.microedition.khronos.egl.EGLDisplay, javax.microedition.khronos.egl.EGLConfig, java.lang.Object)
#	fun create_window_surface(arg0: Javax_microedition_khronos_egl_EGL10, arg1: Javax_microedition_khronos_egl_EGLDisplay, arg2: Javax_microedition_khronos_egl_EGLConfig, arg3: JavaObject): Javax_microedition_khronos_egl_EGLSurface in "Java" `{
#		return self.createWindowSurface(arg0, arg1, arg2, arg3);
#	`}

	# Java implementation:  android.opengl.GLSurfaceView$EGLWindowSurfaceFactory.destroySurface(javax.microedition.khronos.egl.EGL10, javax.microedition.khronos.egl.EGLDisplay, javax.microedition.khronos.egl.EGLSurface)
#	fun destroy_surface(arg0: Javax_microedition_khronos_egl_EGL10, arg1: Javax_microedition_khronos_egl_EGLDisplay, arg2: Javax_microedition_khronos_egl_EGLSurface) in "Java" `{
#		self.destroySurface(arg0, arg1, arg2);
#	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_opengl_GLSurfaceView_EGLWindowSurfaceFactory_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: javax.microedition.khronos.egl.EGLConfig
extern class Javax_microedition_khronos_egl_EGLConfig in "Java" `{ javax.microedition.khronos.egl.EGLConfig `}
	super JavaObject

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Javax_microedition_khronos_egl_EGLConfig_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: javax.microedition.khronos.egl.EGL10
extern class Javax_microedition_khronos_egl_EGL10 in "Java" `{ javax.microedition.khronos.egl.EGL10 `}
	#super Javax_microedition_khronos_egl_EGL
	super JavaObject

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Javax_microedition_khronos_egl_EGL10_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end
