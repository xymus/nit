# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Program used to test the NIT parser
module test_parser

import parser
import parser_util

class PrintTreeVisitor
	super Visitor
	private var rank: Int
	redef fun visit(n)
	do
		if n isa Token then
			printn("  " * rank, n.class_name, " \"", n.text.escape_to_c, "\" ", n.location, "\n")
		else
			printn("  " * rank, n.class_name, " ", n.location, "\n")
		end
		rank = rank + 1
		n.visit_all(self)
		rank = rank - 1
	end

	init
	do
		rank = 0
	end
end

var no_print = false
var only_lexer = false
var need_help = false
var no_file = false
var interactive = false

while not args.is_empty and args.first.chars.first == '-' do
	if args.first == "-n" then
		no_print = true
	else if args.first == "-l" then
		only_lexer = true
	else if args.first == "-p" then
		only_lexer = false
	else if args.first == "-e" then
		no_file = true
	else if args.first == "-i" then
		interactive = true
	else if args.first == "-h" or args.first == "-?" then
		need_help = true
	else
		stderr.write("Unknown option {args.first}.\n")
		exit(0)
	end
	args.shift
end

if (args.is_empty and not interactive) or need_help then
	print("usage:")
	print("  test_parser [options]... <filename.nit>...")
	print("  test_parser -e [options]... <text>...")
	print("  test_parser -i [options]...")
	print("options:")
	print("  -n	do not print anything")
	print("  -l	only lexer")
	print("  -p	lexer and parser (default)")
	print("  -e	instead on files, each argument is a content to parse")
	print("  -i	tree to parse are read interactively")
	print("  -h	print this help")
else if interactive then
	if only_lexer then
		print "Error: -l and -i are incompatibles"
		exit 1
	else if no_file then
		print "Error: -e and -i are incompatibles"
		exit 1
	else if not args.is_empty then
		print "Error: -i works without arguments"
		exit 1
	end

	var tc = new ToolContext

	loop
		var n = tc.interactive_parse("-->")
		if n isa TString then
			var s = n.text
			if s == ":q" then
				break
			else
				print "`:q` to quit"
			end
			continue
		end

		if n isa AError then
			print "{n.location.colored_line("0;31")}: {n.message}"
			continue
		end

		if not no_print then
			(new PrintTreeVisitor).enter_visit(n)
		end
	end
else
	for a in args do
		var source
		if no_file then
			source = new SourceFile.from_string("", a)
		else
			var f = new IFStream.open(a)
			source = new SourceFile(a, f)
			f.close
		end
		var lexer = new Lexer(source)
		if only_lexer then
			var token = lexer.next
			while not token isa EOF do
				if not no_print then
					print("Read token at {token.location} text='{token.text}'")
				end
				token = lexer.next
			end
		else
			var parser = new Parser(lexer)
			var tree = parser.parse

			var error = tree.n_eof
			if error isa AError then
				print("Error at {error.location}:\n\t{error.message}")
				return
			end

			if not no_print then
				(new PrintTreeVisitor).enter_visit(tree)
			end
		end
	end
end
