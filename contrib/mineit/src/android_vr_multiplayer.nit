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

#
module android_vr_multiplayer is
	android_manifest """<uses-permission android:name="android.permission.INTERNET"/>"""
	app_version(0, 5, git_revision)
	app_name "Mineit VR Multi"
	java_package "net.xymus.mineit_vr_multi"
end

	#android_manifest """<uses-permission android:name="android.permission.ACCESS_NETWORK_STATE"/>"""

import android_vr
import multiplayer

redef class App
	redef fun new_gamnit_app
	do
		var client = new MineitClient
		client.server_address = "riph"
		client.server_port = 12345
		return client
	end
end

redef class MineitClient
	redef fun setup
	do
		super
		setup_network
	end
end
