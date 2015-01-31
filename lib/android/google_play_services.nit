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

#
module google_play_services

import nit_activity

in "Java" `{
	import com.google.android.gms.wearable.Wearable;
	import com.google.android.gms.common.api.GoogleApiClient;
	import com.google.android.gms.common.api.GoogleApiClient.*;
	import com.google.android.gms.common.api.*;
	import com.google.android.gms.common.ConnectionResult;

	import android.content.Intent;
	import android.content.Context;
	import android.app.Activity;
	import android.app.NativeActivity;
	import android.view.Gravity;

	import android.util.Log;
	import android.os.Bundle;
`}

redef class App
	var google_api_client: GoogleApiClient =
		native_activity.native_google_api_client.new_global_ref is lazy
end

redef class NativeActivity
	private fun native_google_api_client: GoogleApiClient
	in "Java" `{
		return new GoogleApiClient.Builder(recv)
			.addConnectionCallbacks(new ConnectionCallbacks() {
					@Override
					public void onConnected(Bundle connectionHint) {
						Log.d("Nit", "onConnected: " + connectionHint);
						// Now you can use the Data Layer API
					}
					@Override
					public void onConnectionSuspended(int cause) {
						Log.d("Nit", "onConnectionSuspended: " + cause);
					}
			})
			.addOnConnectionFailedListener(new OnConnectionFailedListener() {
					@Override
					public void onConnectionFailed(ConnectionResult result) {
						Log.d("Nit", "onConnectionFailed: " + result);
					}
				})
			// Request access only to the Wearable API
			.addApi(Wearable.API)
			.build();

	/*
		Activity context = App_native_activity(recv);
		final java.util.ArrayList<GoogleApiClient> apis = new java.util.ArrayList<GoogleApiClient>();
		final java.util.concurrent.Semaphore mutex = new java.util.concurrent.Semaphore(0);

		Runnable r = new Runnable(){
			@Override
			public void run() {
				apis.add(gh1.getApiClient());
				mutex.release();
			}
		};

			context.runOnUiThread(r);
			try {
				mutex.acquire();
			} catch(Exception ex) {}

		return apis.get(0);
	*/
	`}
end

# TODO add new_global_ref
extern class GoogleApiClient in "Java" `{ com.google.android.gms.common.api.GoogleApiClient `}
	super JavaObject

	#
	fun is_connected: Bool in "Java" `{ return recv.isConnected(); `}

	#
	fun connect in "Java" `{ recv.connect(); `}
end
