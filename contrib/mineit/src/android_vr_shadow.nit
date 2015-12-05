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
module android_vr_shadow is
	android_manifest """<uses-permission android:name="android.permission.INTERNET"/>"""
	app_version(0, 5, git_revision)
	app_name "Mineit VR Shadow"
end

	#android_manifest """<uses-permission android:name="android.permission.ACCESS_NETWORK_STATE"/>"""

import android_vr_multiplayer

redef class MineitClient

	redef fun update_other_players(updates: String)
	do
		print "players--> {updates}"
		# Remove all players from last draw
		for player in players_cache do display.remove player

		# Create new players from updates
		var json = updates.to_json_value
		if json.is_error then
			print json.to_error
			quit
		end

		var update = json.to_a.first
		var x = update["px"].to_f
		var y = update["py"].to_f
		var z = update["pz"].to_f

		camera.position.x = x
		camera.position.y = y
		camera.position.z = z
	end
end
