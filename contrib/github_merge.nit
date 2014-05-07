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

# Query the Github PR API to perform a merge
module github_merge

import github_api
import template

redef class Object
	# Factorize cast
	fun json_as_a: Array[nullable Object] do return self.as(Array[nullable Object])
	# Factorize cast
	fun json_as_map: Map[String, nullable Object] do return self.as(Map[String, nullable Object])
end

redef class GithubCurl
	# Get a given pull request (PR)
	fun getpr(number: Int): Map[String, nullable Object]
	do
		var pr = get_and_check("https://api.github.com/repos/privat/nit/pulls/{number}")
		var prm = pr.json_as_map
		var sha = prm["head"].json_as_map["sha"]
		var statuses = get_and_check("https://api.github.com/repos/privat/nit/statuses/{sha}")
		prm["statuses"] = statuses
		print "{prm["title"]}: by {prm["user"].json_as_map["login"]} (# {prm["number"]})"
		print "\tmergable: {prm["mergeable"]}"
		print "\tstatus: {prm["statuses"].json_as_a[0].json_as_map["state"]}"
		return prm
	end

	# Get reviewers of a PR
	fun getrev(pr: Map[String, nullable Object]): Array[String]
	do
		var number = pr["number"].as(Int)
		var user = pr["user"].json_as_map["login"].as(String)
		var comments = new Array[nullable Object]
		comments.add_all(get_and_check("https://api.github.com/repos/privat/nit/issues/{number}/comments").json_as_a)
		comments.add_all(get_and_check("https://api.github.com/repos/privat/nit/pulls/{number}/comments").json_as_a)
		var logins = new Array[String]
		for c in comments do
			var cm = c.json_as_map
			var l = cm["user"].json_as_map["login"]
			assert l isa String
			if l != user and not logins.has(l) then logins.add(l)
		end
		var res = new Array[String]
		for l in logins do
			var u = get_and_check("https://api.github.com/users/{l}").json_as_map
			var r = "{u["name"]} <{u["email"]}>"
			res.add r

		end
		return res
	end

end

if "NIT_TESTING".environ == "true" then exit 0

var auth = get_github_oauth

if auth == "" then
	print "Not github token, please configure one with"
	print "    git config --add github.oauthtoken MYOAUTHTOKEN"
	return
end

var curl = new GithubCurl(auth, "Merge-o-matic (privat/nit)")

if args.length != 1 then
	# Without args, list `ok_will_merge`
	var x = curl.get_and_check("https://api.github.com/repos/privat/nit/issues?labels=ok_will_merge")
	for y in x.json_as_a do
		var number = y.json_as_map["number"].as(Int)
		var pr = curl.getpr(number)
	end
else
	# With a arg, merge the PR
	var number = args.first.to_i
	var pr = curl.getpr(number)
	var revs = curl.getrev(pr)

	var mergemsg = new Template
	mergemsg.add "Merge: {pr["title"]}\n\n"
	mergemsg.add "{pr["body"]}\n\n"
	mergemsg.add "Pull-Request: #{pr["number"]}\n"
	for r in revs do
		mergemsg.add "Reviewed-by: {r}\n"
	end
	mergemsg.write_to_file("mergemsg")

	var sha = pr["head"].json_as_map["sha"].as(String)
	if system("git show -s --pretty=format:%h {sha}") != 0 then
		print "Commit {sha} not in local repository; did you fetch github?"
		return
	end
	if system("git merge --no-commit {sha}") != 0 then
		system("cp mergemsg `git rev-parse --git-dir`/MERGE_MSG")
		print "Problem during merge... Let's do the commit manually."
		return
	end
	system("git commit -F mergemsg")
	print "The merge is made"
end

