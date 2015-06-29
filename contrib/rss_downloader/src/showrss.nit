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

import rss_downloader

# Current user's home directory
fun home: String do return "HOME".environ

redef class Text
	fun html_unescape: String
	do
		return self.replace("&amp;", "&")
	end
end

redef class Config
	redef fun tag_title do return "showrss:rawtitle"

	redef fun act_on(element)
	do
		var proc = new ProcessWriter("deluge-console", new Array[String]...)
		proc.write "add '{element.link.html_unescape}'\n"
		proc.write "exit\n"
		proc.wait
	end
end

redef fun tool_config do return new Config(
	# Source folders
	["/media/x/series/".to_path,
	 "/media/y/series/".to_path,
	 "/media/z/series/".to_path],

	# Custom patterns
	["S01E01",
	 "1x01",
	 "pilot"], # We use Strings here, but we could also use a `Regex`

	# Destination folder
	"/media/z/bittorrent/".to_path,

	# RSS feeds
	["http://showrss.info/feeds/all.rss"],

	# Log file
	"{home}/rss_downloader.log".to_path,

	# Uniqueness patterns
	["S[0-9]+E[0-9]+".to_re, # S01E01
	 "[0-9]+x[0-9]+".to_re,  # 1x01
	 "[0-9][0-9][0-9][0-9].[0-9][0-9].[0-9][0-9]".to_re], # 1970.01.01

	# Uniqueness exceptions
	["repack"])
