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

# Torelated BUG: Initial world...
# Torelated BUG: angle of view
module multiplayer

import socket
import json::dynamic
import persistent

# The visible entity representing players
class VisiblePlayer
	super VisibleCube

	redef var x: Float
	redef var y: Float
	redef var z: Float

	init
	do
		scale = 0.25
		#color = new Color.white
		#color.a = 0.3
	end
end

redef class GamnitApp
	# Address of the server
	var server_address: String is writable

	# Port used by the server
	var server_port: Int is writable

	# Setup the network according to the role of `self`
	fun setup_network is abstract

	fun player_position_to_json: String
	do
		return """{"px": {{{camera.position.x}}}, "py": {{{camera.position.y}}}, """ +
			""""pz": {{{camera.position.z}}}, "ay": {{{camera.pitch}}}, "ax": {{{camera.yaw}}}}"""
	end

	fun update_other_players(updates: String)
	do
		#print "players--> {updates}"
		# Remove all players from last draw
		for player in players_cache do display.remove player

		# Create new players from updates
		var json = updates.to_json_value
		if json.is_error then
			print json.to_error
			quit
		end
		for update in json.to_a do
			var x = update["px"].to_f
			var y = update["py"].to_f
			var z = update["pz"].to_f
			#var  = camera["ay"].to_f
			#var  = camera["ax"].to_f

			var player = new VisiblePlayer(x, y, z)
			players_cache.add player
			display.add player

			# TODO reuse players, mark them dirty
		end
	end

	# Apply remote actions locally
	fun insert_actions(updates: String)
	do
		#print "actions--> {updates}"

		var json = updates.to_json_value
		if json.is_error then
			print json.to_error
			quit
		end
		for lvl in json.to_a do for update in lvl.to_a do
			var act = update["act"].to_s
			var x = update["x"].to_f
			var y = update["y"].to_f
			var z = update["z"].to_f

			applying_remote_actions = true
			if act == "mine" then
				var block = world.blocks[x, y, z]
				#assert block != null
				#mine block
				if block != null then mine block
			else if act == "place" then
				var block = new Block(x, y, z)
				place block
			else abort
			applying_remote_actions = false
		end
	end

	# List of previous graphic representation of players
	var players_cache = new Array[VisiblePlayer]

	# Actions taken this turn to be transmitted to other players
	var actions = new Array[String]

	# Used as an extra argument to  `mine` and `place` 
	var applying_remote_actions = false

	redef fun mine(block)
	do
		if not applying_remote_actions then
			actions.add """{"act": "mine", "x": {{{block.x}}}, "y": {{{block.y}}}, "z": {{{block.z}}}}"""
		end
		super
	end

	redef fun place(block)
	do
		if not applying_remote_actions then
			actions.add """{"act": "place", "x": {{{block.x}}}, "y": {{{block.y}}}, "z": {{{block.z}}}}"""
		end
		super
	end
end

class MineitServer
	super GamnitApp

	var listening_socket: TCPServer is noinit
	var clients = new Array[TCPStream]

	redef fun setup_network
	do
		listening_socket = new TCPServer(server_port)
		listening_socket.listen 8
		listening_socket.blocking = false
	end

	redef fun frame_logic
	do
		super

		var total_clock = new Clock
		var clock = new Clock

		# Check for new clients
		loop
			var new_client = listening_socket.accept
			if new_client == null then break
			
			clients.add new_client

			# As handshake, send the world in its current state
			var world_json = world.to_json
			# strip \n
			world_json = world_json.replace("\n", "")
			new_client.write world_json
			new_client.write "\n"
			new_client.flush
			#print "sent world {world_json.length}"
		end
		sys.time_stats["server listen"].add clock.lapse

		# Prepare for quitting clients
		var quitting_clients = new Array[TCPStream]

		var updates = new Array[String]
		for client in clients do
			# 1. Read position updates or "quit"
			var line = client.read_line
			if line == "quit" then
				quitting_clients.add client
				client.close
				continue
			end
			updates.add line

			if client.closed then quitting_clients.add client
		end

		# Remove clients that quitted
		for client in quitting_clients do clients.remove client

		var actions = new Array[String]
		for client in clients do
			# 2. Read actions taken this turn
			var line = client.read_line
			actions.add line
		end
		sys.time_stats["server read"].add clock.lapse

		# Add local changes to the list
		updates.add player_position_to_json
		actions.add self.actions.to_json
		self.actions.clear

		# Update clients by filtering out their own data
		var k = 0
		for client in clients do
			# 3. Write other positions
			client.write updates.to_json_without(k)

			# 4. Write actions taken this turn
			client.write actions.to_json_without(k)
			k += 1

			client.flush
		end
		sys.time_stats["server write"].add clock.lapse

		# Apply changes locally
		update_other_players updates.to_json_without(k)
		insert_actions actions.to_json_without(k)
		sys.time_stats["server apply"].add clock.lapse

		sys.time_stats["server"].add total_clock.lapse
	end

	redef fun quit
	do
		super

		for client in clients do
			client.write "quit\n"
			client.close
		end
	end
end

class MineitClient
	super GamnitApp

	var socket: TCPStream is noinit

	redef fun setup_network
	do
		world = new MineitWorld

		#print "AAAAAA"
		socket = new TCPStream.connect(server_address, server_port)
		#print server_address
		#print server_port
		assert socket.connected

		# As handshake, receive world
		var json_world = socket.read_line
		var json = json_world.to_json_value
		update_world_from_json(json)
		#print "received the world! {json_world.length} bytes"
	end

	redef fun frame_logic
	do
		super

		var total_clock = new Clock
		var clock = new Clock

		# 1. Write current position
		#print "writing"
		var this_update = player_position_to_json
		socket.write this_update
		socket.write "\n"

		# 2. Write actions taken this turn
		socket.write actions.to_json
		socket.write "\n"
		self.actions.clear
		sys.time_stats["client write"].add clock.lapse
		socket.flush

		# 3. Read other positions or "quit"
		#print "reading"
		var updates = socket.read_line
		#print "updates->" + updates

		if updates == "quit" then
			#print "The server is quitting"
			exit 0
		end

		# 4. Read actions taken by others
		var actions = socket.read_line
		#print "actions->" + updates
		sys.time_stats["client read"].add clock.lapse

		# Apply changes locally
		update_other_players updates
		insert_actions actions
		sys.time_stats["client apply"].add clock.lapse

		sys.time_stats["client"].add total_clock.lapse
	end

	redef fun quit
	do
		socket.write "quit\n"
		socket.close
		super
	end
end

redef class Array[E]
	#
	fun to_json_without(skip: Int): String
	do
		var filtered = new Array[E].from(self)
		filtered.remove_at skip
		return "[{filtered.join(", ")}]\n"
	end
end
