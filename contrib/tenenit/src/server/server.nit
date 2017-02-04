# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Web server for Tenenit
module server

import model
import view
import controller
import restful

# Listening interface
fun iface: String do return "localhost:8080"

# Listening interface for admin commands
fun iface_admin: String do return "localhost:8081"

#
fun db_path: String do return "tenenit_sherbrooke.db"

# Sqlite3 database
var db = new TenenitDB.open(db_path)
var db_error = db.error
if db_error != null then
	print_error db_error
	exit 1
end

# Setup routes
var vh = new VirtualHost(iface)
vh.routes.add new Route("/rest/", new TenenitRESTAction(db))
vh.routes.add new Route("/push/", new TenenitPushAction(db))
vh.routes.add new Route(null, new TenenitSubscriptionAction(db))

var vh_admin = new VirtualHost(iface_admin)
vh_admin.routes.add new Route(null, new TenenitAdminAction(db))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.config.virtual_hosts.add vh_admin

print "Launching server on http://{iface}/ and http://{iface_admin}/"
factory.run

db.close
