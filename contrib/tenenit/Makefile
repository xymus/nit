SERVER ?= localhost:8080

all: server bin/report bin/tenenit

server: bin/tenenit_daily bin/tenenit_web
bin/tenenit_daily: $(shell nitls -M tenenit::daily.nit)
	nitc -o $@ tenenit::daily

bin/tenenit_web: $(shell nitls -M tenenit::server) src/server/restful.nit
	nitc -o $@ tenenit::server -D iface=$(SERVER)

pre-build: src/server/restful.nit
src/server/restful.nit: $(shell nitls -M tenenit::controller)
	nitrestful -o $@ tenenit::controller

# ---
# Report

bin/report: $(shell nitls -M tenenit::report)
	nitc -o $@ tenenit::report

report: bin/report
	bin/report

# ---
# GTK+ client

bin/tenenit: $(shell nitls -M tenenit::client)
	nitc -o $@ tenenit::client -m linux -D tenenit_rest_server_uri=http://$(SERVER)/

# ---
# Android

# Dev / debug app
android: bin/tenenit_debug.apk
bin/tenenit_debug.apk: $(shell nitls -M tenenit::android) default-res
	nitc -o $@ tenenit::android -m tenenit::debug -D tenenit_rest_server_uri=http://$(SERVER)/

# Pure portable prototype, for comparison
bin/tenenit_proto.apk: $(shell nitls -M tenenit::sherbrooke -m ::android) sherbrooke-res
	nitc -o $@ tenenit::sherbrooke -m ::android

# Release version
android-release:
bin/tenenit.apk: $(shell nitls -M tenenit::sherbrooke -m tenenit::android) sherbrooke-res
	nitc -o $@ tenenit::sherbrooke -m tenenit::android --release

# Resources
default-res: android/res/drawable-hdpi/icon.png android/res/drawable-hdpi/notif.png
sherbrooke-res: brand/sherbrooke/android/res/drawable-hdpi/icon.png brand/sherbrooke/android/res/drawable-hdpi/notif.png

# Main icons
android/res/drawable-hdpi/icon.png: art/icon.svg
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

brand/sherbrooke/android/res/drawable-hdpi/icon.png: art/icon.svg
	../inkscape_tools/bin/svg_to_icons brand/sherbrooke/art/icon.svg --android --out brand/sherbrooke/android/res/

# Notification icons, white only
android/res/drawable-hdpi/notif.png: art/notif.svg
	../inkscape_tools/bin/svg_to_icons art/notif.svg --android --out android/res/ --name notif

brand/sherbrooke/android/res/drawable-hdpi/notif.png: art/notif.svg
	../inkscape_tools/bin/svg_to_icons brand/sherbrooke/art/notif.svg --android --out brand/sherbrooke/android/res/ --name notif

# ---
# iOS

ios: bin/tenenit_debug.app
bin/tenenit_debug.app: $(shell nitls -M tenenit::ios) ios/AppIcon.appiconset/Contents.json
	nitc -o $@ tenenit::ios -D tenenit_rest_server_uri=http://$(SERVER)/

bin/tenenit_proto.app: $(shell nitls -M tenenit::sherbrooke -m ::ios) ios/AppIcon.appiconset/Contents.json
	nitc -o $@ tenenit::sherbrooke -m ::ios

ios-release: bin/tenenit.app
bin/tenenit.app: $(shell nitls -M tenenit::ios) ios/AppIcon.appiconset/Contents.json
	nitc -o $@ tenenit::sherbrooke -m tenenit::ios --release --compile-dir nit_compile

ios/AppIcon.appiconset/Contents.json: art/icon.svg
	../inkscape_tools/bin/svg_to_icons art/icon.svg --ios --out ios/AppIcon.appiconset/
