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

# Android Wear remote for Gamnit in virtual reality mode
#
# * This module, UI
# * Sensor
# * Communication with main
module android_wear_remote is
	java_package "net.xymus.mineit.wear_remote"
	app_name "Mineit Remote"
end

import android::log
import android::ui
import java::collections


import android::google_play_services
in "Java" `{
	import java.util.HashSet;
	import com.google.android.gms.wearable.*;
	import com.google.android.gms.wearable.NodeApi.*;
`}

redef class Activity
	super EventCatcher

	var but_mine = new Button is lazy
	var but_place = new Button is lazy
	var but_forward = new Button is lazy
	var but_quit = new Button is lazy

	redef fun on_start
	do
		super

		#if inited then return
		#inited = true

		# Setup UI
		var layout = new NativeLinearLayout(native)
		layout.set_vertical

		#
		var labels = ["Mine", "Put", "Move", "Quit"]
		for but in [but_mine, but_place, but_forward, but_quit] do
			but.event_catcher = self
			but.text = labels.shift
			but.text_size = 20
			layout.add_view_with_weight(but.native, 1.0) # use simple add_view
		end

		native.content_view = layout
	end

	redef fun catch_event(event)
	do
		log("-------".to_java_string, "Event!!!".to_java_string)
		if event isa ClickEvent then
			var sender = event.sender
			if sender == but_mine then
				app.log_error(nodes(app.google_api_client).length.to_s)
				for e in nodes(app.google_api_client) do log("----------".to_java_string, e.to_s.to_java_string)
				#app.log_warning(e.to_s)
			end
			if sender == but_place then print "Mine!"
			if sender == but_quit then
				native.finish
			end
		end
	end

	fun nodes(mGoogleApiClient: GoogleApiClient): JavaStringArray in "Java" `{
	    HashSet <String>results = new HashSet<String>();
	    NodeApi.GetConnectedNodesResult nodes =
		    Wearable.NodeApi.getConnectedNodes(mGoogleApiClient).await();

	    for (Node node: nodes.getNodes()) results.add(node.getId());

	    return results.toArray(new String[results.size()]);
	`}

	fun log(tag, msg: JavaString) in "Java" `{
		android.util.Log.e(tag, msg);
	`}
end
