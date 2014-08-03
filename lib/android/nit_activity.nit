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

# Some documentation of this module has been adapted from the
# Android Open Source Project.

# Core implementation of `app.nit` on Android using a custom Java entry point
#
# This module is implemented in 3 languages:
#
# * The Java code, in `NitActivity.java` acts as the entry point registered
#   to the Android OS. It relays most of the Android callbacks to C.
#   In theory, there may be more than one instance of `NitActivity` alive at
#   a given time. They hold a reference to the corresponding Nit `Activity`
#   in the attribute `nitActivity`.
#
# * The C code is defined in the top part of this source file. It acts as a
#   glue between Java and Nit by relaying calls between both languages.
#   It keeps a global variables reference to the Java VM and the Nit `App`.
#
# * The Nit code defines the `Activity` class with the callbacks from Android.
#   The callback methods should be redefined by user modules.
#
# The main is invoked when the native library is dynamically linked by
# the Java virtual machine. For this reason, the main _must_ execute quickly,
# on the main UI thread at least.
module nit_activity is
	extra_java_files "NitActivity.java"
	android_activity "nit.app.NitActivity"
end

import platform
import log
import activities
import bundle
import dalvik

in "C body" `{

	#include <jni.h>
	#include <android/log.h>

	// Nit's App running instance
	App global_app;

	// Java VM that launched this program
	JavaVM *global_jvm;

	// JNI callback on loading this program
	jint JNI_OnLoad(JavaVM *vm, void *reserved) {
		// Set aside the Java VM
		global_jvm = vm;

		// Invoke Nit system and main
		main(0, NULL);

		return JNI_VERSION_1_2;
	}

	/*
	 * Implementations of NitActivity.java native methods
	 */

	JNIEXPORT jint JNICALL Java_nit_app_NitActivity_nitRegisterActivity
	  (JNIEnv *env, jobject java_activity)
	{
		Activity nit_activity = App_register_activity(global_app, java_activity);
		Activity_incr_ref(nit_activity);
		return (jint)(void*)nit_activity;
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnCreate
	  (JNIEnv *env, jobject java_activity, jint nit_activity, jobject saved_state)
	{
		Activity_on_create((Activity)nit_activity, saved_state);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnStart
	  (JNIEnv *env, jobject java_activity, jint nit_activity)
	{
		Activity_on_start((Activity)nit_activity);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnResume
	  (JNIEnv *env, jobject java_activity, jint nit_activity)
	{
		Activity_on_resume((Activity)nit_activity);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnPause
	  (JNIEnv *env, jobject java_activity, jint nit_activity)
	{
		Activity_on_pause((Activity)nit_activity);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnStop
	  (JNIEnv *env, jobject java_activity, jint nit_activity)
	{
		Activity_on_stop((Activity)nit_activity);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnDestroy
	  (JNIEnv *env, jobject java_activity, jint nit_activity)
	{
		Activity_on_destroy((Activity)nit_activity);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnSaveInstanceState
	  (JNIEnv *env, jobject java_activity, jint nit_activity, jobject saved_state)
	{
		Activity_on_save_instance_state((Activity)nit_activity, saved_state);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitActivity_nitOnRestoreInstanceState
	  (JNIEnv *env, jobject java_activity, jint nit_activity, jobject saved_state)
	{
		Activity_on_restore_instance_state((Activity)nit_activity, saved_state);
	}
`}

# Wrapper to our Java `NitActivity`
extern class NativeNitActivity in "Java" `{ nit.app.NitActivity `}
	super NativeActivity
end

redef class Sys
	redef fun jvm `{ return global_jvm; `}
end

redef class App
	# Known activities
	var activities = new Array[Activity]

	# The main Java Activity of this application
	redef fun native_activity do return activities.first.native

	redef fun setup do set_global_app

	# Register app in C
	private fun set_global_app import register_activity,
	Activity.on_create, Activity.on_start, Activity.on_pause, Activity.on_resume,
	Activity.on_destroy, Activity.on_stop,
	Activity.on_save_instance_state, Activity.on_restore_instance_state `{
		App_incr_ref(recv);
		global_app = recv;
	`}

	# Create the Nit side to this new `native` Java activity, and return it to Java
	private fun register_activity(native: NativeNitActivity): Activity
	do
		native = native.new_global_ref
		var activity = new Activity(native)
		activities.add activity
		return activity
	end
end

# An Android activity
class Activity
	# Native Java activity
	var native: NativeActivity

	# Notification from Android, the activity is created
	#
	# Do your normal static set up here.
	#
	# If available, `save_state` contains the activity's previously frozen state.
	fun on_create(save_state: NativeBundle) do end

	# Notification from Android, the activity is being re-initialized from a `save_state`
	fun on_restore_instance_state(save_state: NativeBundle) do end

	# Notification from Android to save state
	fun on_save_instance_state(save_state: NativeBundle) do end

	# Notification from Android, your app has been paused
	fun on_pause do end

	# Notification from Android, your app has been stopped
	fun on_stop do end

	# Notification from Android, `native_activity` is being destroyed
	#
	# Clean up and exit.
	fun on_destroy do end

	# Notification from Android, `native_activity` has been started
	fun on_start do end

	# Notification from Android, `native_activity` has been resumed
	fun on_resume do end

	# Notification from Android, the system is running low on memory
	#
	# Try to reduce your memory use.
	fun on_low_memory do end

	# Notification from Android, the current window of the activity has lost or gained focus
	fun on_window_focus_changed(has_focus: Bool) do end

	# Notification from Android, the current device configuration has changed
	fun on_configuration_changed do end
end

# Set up global data in C and leave it to Android to callback Java, which we relay to Nit
app.setup
