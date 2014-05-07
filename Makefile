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

NITCOPT=

all: tools doc/stdlib/index.html

docs: doc/stdlib/index.html doc/nitc/index.html
	#cd doc; make

tools:
	cd src; make

bin/nitdoc:
	cd src; make ../bin/nitdoc

bin/nitls:
	cd src; make ../bin/nitls

doc/stdlib/index.html: bin/nitdoc bin/nitls
	@echo '***************************************************************'
	@echo '* Generate doc for NIT standard library                       *'
	@echo '***************************************************************'
	bin/nitdoc $$(bin/nitls lib -r --path) -d doc/stdlib \
		--custom-title "Nit Standard Library" \
		--custom-menu-items "<li><a href=\"http://nitlanguage.org/\">Nitlanguage.org</a></li>" \
		--custom-overview-text "<p>Documentation for the standard library of Nit<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit standard library. Version $$(git describe)." \
		--github-upstream "privat:nit:master" \
		--github-base-sha1 "$$(git rev-parse HEAD)" \
		--github-gitdir "." \
		--source "https://github.com/privat/nit/blob/$$(git rev-parse HEAD)/%f#L%l-%L" \
		--piwik-tracker "pratchett.info.uqam.ca/piwik/" \
		--piwik-site-id "2"

doc/nitc/index.html: bin/nitdoc
	bin/nitdoc src/nit*.nit src/test_*.nit -d doc/nitc \
		--private \
		--custom-title "Nit Compilers and Tools" \
		--custom-menu-items "<li><a href=\"http://nitlanguage.org/\">Nitlanguage.org</a></li>" \
		--custom-overview-text "<p>Documentation for the Nit tools<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit tools. Version $$(git describe)." \
		--github-upstream "privat:nit:master" \
		--github-base-sha1 "$$(git rev-parse HEAD)" \
		--github-gitdir "." \
		--source "https://github.com/privat/nit/blob/$$(git rev-parse HEAD)/%f#L%l-%L" \
		--piwik-tracker "pratchett.info.uqam.ca/piwik/" \
		--piwik-site-id "3"

clean:
	rm -rf -- .nit_compile 2> /dev/null || true
	cd c_src; make clean
	cd src; make clean
	cd doc; make clean
	cd tests; make clean

distclean: clean
	rm -rf -- bin/nitdoc bin/nits doc/stdlib 2> /dev/null || true
	cd c_src; make distclean
	cd src/parser; make distclean
	cd doc; make distclean
	cd tests; make distclean
