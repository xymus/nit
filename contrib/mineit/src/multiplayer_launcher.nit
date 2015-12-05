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
module multiplayer_launcher

# TODO send world on connect
import gtk
import multiplayer
import linux

# A GTK launcher to select 
class MineitLauncher
	super GtkCallable

	private var win: GtkWindow is noinit
	private var container: GtkGrid is noinit

	private var txt_server: GtkEntry is noinit
	private var txt_port: GtkEntry is noinit

	private var but_host: GtkButton is noinit
	private var but_join: GtkButton is noinit

	private var gamnit_app: nullable GamnitApp = null

	redef fun signal(sender, op)
	do
		if sender == but_host then
			gamnit_app = new MineitServer
		else if sender == but_join then
			gamnit_app = new MineitClient
		else abort

		gamnit_app.server_address = ""+txt_server.text
		gamnit_app.server_port = txt_port.text.to_i

		# Close the GTK window
		win.hide
		win.destroy
		quit_gtk
	end

	init
	do
		init_gtk

		win = new GtkWindow(0)
		win.resizable = false
		win.title = "Mineit Multiplayer"

		container = new GtkGrid(2, 3, false)
		win.add(container)

		var lbl_server = new GtkLabel("Server address")
		container.attach(lbl_server, 0, 0, 1, 1)

		txt_server = new GtkEntry
		txt_server.text = "localhost"
		container.attach(txt_server, 1, 0, 1, 1)

		var lbl_port = new GtkLabel("Server port")
		container.attach(lbl_port, 0, 1, 1, 1)

		txt_port = new GtkEntry
		txt_port.text = "12345"
		container.attach(txt_port, 1, 1, 1, 1)

		but_join = new GtkButton.with_label("Join")
		but_join.signal_connect("clicked", self, null)
		container.attach(but_join, 0, 2, 1, 1)

		but_host = new GtkButton.with_label("Host")
		but_host.signal_connect("clicked", self, null)
		container.attach(but_host, 1, 2, 1, 1)

		win.show_all
	end
end

var gtk_app = new MineitLauncher
run_gtk

# Once the launcher is claused, launch gamnit
var gamnit_app = gtk_app.gamnit_app

gamnit_app.setup
gamnit_app.setup_network
gamnit_app.run
