# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

# Declare, assign and read local variables.
var a: Int	# `a' is a local variable.
a = 10		# Assignement.
print(a)  	# print 10
do
	var b = 20 # `b' is a local variable.
	print(b) 	# print 20
	a = b + 10	# a = 30
end
# `b' no more exists.
print(a)	# print 30
