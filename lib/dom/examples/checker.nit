# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Simple XML validity checker using the `dom` module
module checker

import dom
import curl

# Check arguments
if args.length != 1 then
	print_error "Usage: checker xml_file|url_to_xml_file"
	exit 2
end

var path = args.first
var content

if path.has_prefix("http://") then
	# Use curl to download from HTTP
	var request = new CurlHTTPRequest(path)
	var response = request.execute

	if response isa CurlResponseFailed then
		print_error "Failed to download URL '{path}' with: {response.error_msg} ({response.error_code})"
		exit 3
	end

	assert response isa CurlResponseSuccess
	content = response.body_str
else
	# Use the local path
	if not path.file_exists then
		print_error "Path '{path}' does not exist"
		exit 3
	end

	content = path.to_path.read_all
end

# Parse XML
var xml = content.to_xml
if xml isa XMLError then
	print_error "XML file at '{path}' is invalid:"
	print_error xml.message
	var loc = xml.location
	if loc != null then print_error loc
	exit 1
else
	print "XML file at '{path}' is valid"
end
