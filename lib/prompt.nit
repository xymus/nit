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

# Basic services to display a prompt
module prompt

# Display `prompt` in the console and wait for a response
#
# Return the user response, or `null` if EOF.
#
# If `add_history`, the user response is added to the history.
fun prompt(prompt: Text, add_history: nullable Bool): nullable String
do
	printn prompt
	var res = stdin.read_line
	if res == "" and stdin.peek_eof then return null
	return res
end

# Add `line` to the shell history
#
# The default implementation is a noop, but other packages can refine it.
fun prompt_add_history(line: String) do end

redef class Reader
	private fun peek_eof: Bool do return eof
end

redef class BufferedReader
	redef fun peek_eof do return end_reached
end
