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

import core::kernel

class G[E: Object]
	var e: E
	fun foo: Object
	do
		var e = self.e
		if e isa G[Object] then
			return e.foo
		end
		return e
	end
end

var g1 = new G[Float](1.0)
var g2 = new G[G[Float]](g1)
g2.foo.output
