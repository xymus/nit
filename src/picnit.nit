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

# Nit package manager command line interface
module picnit

import opts
import prompt
import ini
import curl

import picnit_shared

# Command line action, passed after `picnit`
abstract class Command

	# Short name of the command, specified in the command line
	fun name: String is abstract

	# Short usage description
	fun usage: String is abstract

	# Command description
	fun description: String is abstract

	# Apply this command consiering the `args` that follow
	fun apply(args: Array[String]) do end

	private var all_commands: Map[String, Command]

	init do all_commands[name] = self

	# Print the help message for this command
	fun print_local_help
	do
		print "usage: {usage}"
		print ""
		print "  {description}"
	end
end

# Install a new package
class CommandInstall
	super Command

	redef fun name do return "install"
	redef fun usage do return "picnit install [package0[=version] [package1 ...]]"
	redef fun description do return "Install packages by name, Git repository address or from the local package.ini"

	# Packages installed in this run (identified by the full path)
	private var installed = new Array[String]

	redef fun apply(args)
	do
		if args.not_empty then
			# Install each package
			for arg in args do
				# Parse each arg as an import string, with versions and commas
				install_packages arg
			end
		else
			# Install packages from local package.ini
			var ini_path = "package.ini"
			if not ini_path.file_exists then
				print_error "Local `package.ini` not found."
				print_local_help
				exit 1
			end

			var ini = new ConfigTree(ini_path)
			var import_line = ini["package.import"]
			if import_line == null then
				print_error "The local `package.ini` declares no external dependencies."
				exit 0
				abort
			end

			install_packages import_line
		end
	end

	# Install packages defined by the `import_line`
	private fun install_packages(import_line: String)
	do
		var imports = import_line.parse_import
		for name, ext_package in imports do
			install_package(ext_package.id, ext_package.version)
		end
	end

	# Install the `package_id` at `version`
	private fun install_package(package_id: String, version: nullable String)
	do
		if package_id.is_package_name then
			# Ask a centralized server
			# TODO choose a future safe URL
			# TODO customizable server list
			# TODO parse ini file in memory

			var url = "https://xymus.net/picnit/{package_id}.ini"
			var ini_path = "/tmp/{package_id}.ini"

			if verbose then print "Looking for a package description at '{url}'"

			var request = new CurlHTTPRequest(url)
			request.verbose = verbose
			var response = request.download_to_file(ini_path)

			if response isa CurlResponseFailed then
				print_error "Failed to contact the remote server at '{url}': {response.error_msg} ({response.error_code})"
				exit 1
			end

			assert response isa CurlFileResponseSuccess
			if response.status_code == 404 then
				print_error "Package '{package_id}' not found on the server"
				exit 1
			else if response.status_code != 200 then
				print_error "Server side error: {response.status_code}"
				exit 1
			end

			if verbose then
				print "Found a package description:"
				print ini_path.to_path.read_all
			end

			var ini = new ConfigTree(ini_path)
			var git_repo = ini["upstream.git"]
			if git_repo == null then
				print_error "Package description invalid, or it does not declare a Git repository"
				exit 1
				abort
			end

			install_from_git(git_repo, package_id, version)
		else
			var name = package_id.git_name
			if name != null and name != "." and not name.is_empty then
				name = name.to_lower
				install_from_git(package_id, name, version)
			else
				print_error "Failed to infer the package name"
				exit 1
			end
		end
	end

	private fun install_from_git(git_repo, name: String, version: nullable String)
	do
		check_git

		var target_dir = picnit_lib_dir / name
		if version != null then target_dir += "=" + version
		if installed.has(target_dir) then
			# Ignore packages installed in this run
			return
		end
		installed.add target_dir

		if target_dir.file_exists then
			# Warn about packages previously installed,
			# install dependencies anyway in case of a previous error.
			print_error "Package '{name}' is already installed"
		else
			# Actually install it
			var cmd_branch = ""
			if version != null then cmd_branch = "--branch '{version}'"

			var cmd = "git clone --depth 1 {cmd_branch} {git_repo.escape_to_sh} {target_dir.escape_to_sh}"
			if verbose then print "+ {cmd}"

			if "NIT_TESTING".environ == "true" then
				# Silence git output when testing
				cmd += " 2> /dev/null"
			end

			var proc = new Process("sh", "-c", cmd)
			proc.wait

			if proc.status != 0 then
				print_error "Install of '{name}' failed"
				exit 1
			end
		end

		# Recursive install
		var ini = new ConfigTree(target_dir/"package.ini")
		var import_line = ini["package.import"]
		if import_line != null then
			install_packages import_line
		end
	end
end

# Upgrade a package
class CommandUpgrade
	super Command

	redef fun name do return "upgrade"
	redef fun usage do return "picnit upgrade <package>"
	redef fun description do return "Upgrade a package"

	redef fun apply(args)
	do
		if args.length != 1 then
			print_local_help
			exit 1
		end

		var name = args.first
		var target_dir = picnit_lib_dir / name

		if not target_dir.file_exists or not target_dir.to_path.is_dir then
			print_error "Package not found"
			exit 1
		end

		check_git

		var cmd = "cd {target_dir.escape_to_sh}; git pull"
		if verbose then print "+ {cmd}"

		var proc = new Process("sh", "-c", cmd)
		proc.wait

		if proc.status != 0 then
			print_error "Upgrade failed"
			exit 1
		end
	end
end

# Uninstall a package
class CommandUninstall
	super Command

	redef fun name do return "uninstall"
	redef fun usage do return "picnit uninstall <package>"
	redef fun description do return "Uninstall a package"

	redef fun apply(args)
	do
		if args.length != 1 then
			print_local_help
			exit 1
		end

		var name = args.first
		var target_dir = picnit_lib_dir / name

		if not target_dir.file_exists or not target_dir.to_path.is_dir then
			print_error "Package not found"
			exit 1
		end

		# Ask confirmation
		var response = prompt("Delete {target_dir.escape_to_sh}? [Y/n] ")
		var accept = response != null and
			(response.to_lower == "y" or response.to_lower == "yes" or response == "")
		if not accept then return

		var cmd = "rm -rf {target_dir.escape_to_sh}"
		if verbose then print "+ {cmd}"

		var proc = new Process("sh", "-c", cmd)
		proc.wait

		if proc.status != 0 then
			print_error "Uninstall failed"
			exit 1
		end
	end
end

# List all installed packages
class CommandList
	super Command

	redef fun name do return "list"
	redef fun usage do return "picnit list"
	redef fun description do return "List installed packages"

	redef fun apply(args)
	do
		var files = picnit_lib_dir.files
		for file in files do
			var ini_path = picnit_lib_dir / file / "package.ini"
			if verbose then print "- Reading ini file at {ini_path}"
			var ini = new ConfigTree(ini_path)
			var tags = ini["package.tags"]

			if tags != null then
				print "{file.justify(15, 0.0)} {tags}"
			else
				print file
			end
		end
	end
end

# Show general help or help specific to a command
class CommandHelp
	super Command

	redef fun name do return "help"
	redef fun usage do return "picnit help [command]"
	redef fun description do return "Show general help message or the help for a command"

	redef fun apply(args)
	do
		# Try first to help about a valid action
		if args.length == 1 then
			var command = commands.get_or_null(args.first)
			if command != null then
				command.print_local_help
				return
			end
		end

		print_help
	end
end

redef class Sys

	# General command line options
	var opts = new OptionContext

	# Help option
	var opt_help = new OptionBool("Show this help message", "--help", "-h")

	# Verbose mode option
	var opt_verbose = new OptionBool("Print more information", "--verbose", "-v")
	private fun verbose: Bool do return opt_verbose.value

	# All command line actions, mapped to their short `name`
	var commands = new Map[String, Command]

	private var command_install = new CommandInstall(commands)
	private var command_list = new CommandList(commands)
	private var command_update = new CommandUpgrade(commands)
	private var command_uninstall = new CommandUninstall(commands)
	private var command_help = new CommandHelp(commands)
end

redef fun picnit_lib_dir
do
	if "NIT_TESTING".environ == "true" then
		return "/tmp/picnit-test-" + "NIT_TESTING_ID".environ
	else return super
end

# Print the general help message
private fun print_help
do
	print "usage: picnit <command> [options]"
	print ""

	print "commands:"
	for command in commands.values do
		print "  {command.name.justify(11, 0.0)} {command.description}"
	end
	print ""

	print "options:"
	opts.usage
end

# Check if `git` is available, exit if not
private fun check_git
do
	var proc = new ProcessReader("git", "--version")
	proc.wait
	proc.close

	if proc.status != 0 then
		print_error "Please install `git`"
		exit 1
	end
end

# Parse main options
opts.add_option(opt_help, opt_verbose)
opts.parse
var rest = opts.rest

if opt_help.value then
	print_help
	exit 0
end

if opts.errors.not_empty then
	for error in opts.errors do print error
	print ""
	print_help
	exit 1
end

if rest.is_empty then
	print_help
	exit 1
end

# Find and apply action
var action_name = rest.shift
var action = commands.get_or_null(action_name)
if action != null then
	action.apply rest
else
	print_help
	exit 1
end
