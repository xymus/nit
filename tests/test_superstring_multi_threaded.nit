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

# Test concurrent executions of a single superstring site
import pthreads

# A Thread that assembles many superstrings and checks them for corruption
#
# All instances execute the same superstring site concurrently,
# a corrupted result contains parts from another thread.
class SuperstringThread
	super Thread

	# Identifier to interpolate in each superstring
	var id: Int

	redef fun main do
		var errors = 0
		for i in [0..50000[ do
			var str = "<{id} and {i}, {id} and {i}, {id} and {i}>"
			var ref = "<" + id.to_s + " and " + i.to_s + ", " + id.to_s + " and " + i.to_s + ", " + id.to_s + " and " + i.to_s + ">"
			if str != ref then errors += 1
		end
		print "{errors} corrupted superstrings"
		return null
	end
end

var ts = new Array[SuperstringThread]
var nb_threads = 4
for i in [0..nb_threads[ do
	var t = new SuperstringThread(i)
	ts.add(t)
	t.start
end
for t in ts do t.join
