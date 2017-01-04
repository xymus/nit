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

module wellington is
	app_name "Benelux Wellington"
	app_namespace "net.xymus.wellington"
	app_files
end

import tenenit::client

redef fun in_app_name do return "Benelux Wellington"
redef fun event_website do return "http://brasseriebenelux.com/wellington"
redef fun tenenit_rest_server_uri do return "https://xymus.net/tenenit/wellington/"
