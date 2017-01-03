SERVER ?= localhost:8080

all: server bin/report bin/tenenit

server: bin/tenenit_daily bin/tenenit_web
bin/tenenit_daily: $(shell nitls -M src/server/tenenit_daily.nit)
	mkdir -p bin/
	nitc -o $@ src/server/tenenit_daily.nit

bin/tenenit_web: $(shell nitls -M src/server/server.nit) src/server/restful.nit
	mkdir -p bin/
	nitc -o $@ src/server/server.nit -D iface=$(SERVER)

pre-build: src/server/restful.nit
src/server/restful.nit: $(shell nitls -M src/server/controller.nit)
	nitrestful -o $@ src/server/controller.nit

# ---
# Report

bin/report: $(shell nitls -M src/report.nit)
	nitc -o bin/report src/report.nit

report: bin/report
	bin/report

# ---
# GTK+ client

bin/tenenit: $(shell nitls -M src/client/client.nit)
	mkdir -p bin/
	nitc -o bin/tenenit src/client/client.nit -m linux -D tenenit_rest_server_uri=http://$(SERVER)/

# ---
# Android

# Main icon
android/res/drawable-hdpi/icon.png:
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

# Notification icon, white only
android/res/drawable-hdpi/notif.png:
	../inkscape_tools/bin/svg_to_icons art/notif.svg --android --out android/res/ --name notif

android-res: android/res/drawable-hdpi/icon.png android/res/drawable-hdpi/notif.png

# Dev / debug app
android: bin/tenenit.apk
bin/tenenit.apk: $(shell nitls -M src/client/android.nit) android-res
	mkdir -p bin/ res/
	nitc -o $@ src/client/android.nit -m src/client/features/debug.nit \
		-D tenenit_rest_server_uri=http://$(SERVER)/

# Pure portable prototype, for comparison
bin/proto.apk: $(shell nitls -M src/client/android_proto.nit) android-res
	mkdir -p bin/ res/
	nitc -o $@ src/client/android_proto.nit \
		-D tenenit_rest_server_uri=http://$(SERVER)/

# Release version
android-release: $(shell nitls -M src/client/android.nit) android-res
	mkdir -p bin/ res/
	nitc -o bin/tenenit.apk src/client/android.nit \
		-D tenenit_rest_server_uri=http://xymus.net/tenenit/ --release

# ---
# iOS

ios: bin/tenenit.app
bin/tenenit.app: $(shell nitls -M src/client/ios.nit) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	rm -rf bin/tenenit.app/
	nitc -o bin/tenenit.app src/client/ios.nit -D tenenit_rest_server_uri=http://$(SERVER)/

bin/proto.app: $(shell nitls -M src/client/ios_proto.nit) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/ res/
	nitc -o $@ src/client/ios_proto.nit \
		-D tenenit_rest_server_uri=http://$(SERVER)/

ios-release: $(shell nitls -M src/client/ios.nit) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	nitc -o bin/tenenit.app src/client/ios.nit \
		-D tenenit_rest_server_uri=http://xymus.net/tenenit/ --release \
		--compile-dir nit_compile

ios/AppIcon.appiconset/Contents.json: art/icon.svg
	mkdir -p ios
	../inkscape_tools/bin/svg_to_icons art/icon.svg --ios --out ios/AppIcon.appiconset/
