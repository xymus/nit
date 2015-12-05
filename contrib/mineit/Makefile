all: linux

# Compile all alternative versions for GNU/Linux
linux: bin desktop_assets
	# Core and best alternatives
	../../bin/nitc -o bin/mineit_core src/mineit.nit -m src/linux.nit
	../../bin/nitc -o bin/mineit src/mineit.nit -m src/linux.nit -m src/better_generation.nit
	#../../bin/nitc -o bin/mineit src/persistent_binary.nit -m src/linux.nit -m src/better_generation.nit

	# More alternatives (multiplayer, VR and optimized)
	#../../bin/nitc -o bin/mineit_optimized src/optimized.nit -m src/linux.nit
	#../../bin/nitc --global -o bin/mineit_multiplayer src/multiplayer_launcher.nit
	#../../bin/nitc -o bin/mineit_server src/server.nit
	#../../bin/nitc -o bin/mineit_vr src/vr.nit -m src/linux.nit

# Compile 3 different versions for Android
android: bin/mineit.apk bin/mineit_vr.apk bin/mineit_vr_multi.apk

bin/mineit.apk: bin android_assets $(shell nitls -M src/android.nit)
	../../bin/nitc -o bin/mineit.apk src/android.nit
	adb install -r bin/mineit.apk

bin/mineit_vr.apk: bin android_assets $(shell nitls -M src/android_vr.nit)
	../../bin/nitc -o bin/mineit_vr.apk src/android_vr.nit
	adb install -r bin/mineit_vr.apk

bin/mineit_vr_multi.apk: bin android_assets $(shell nitls -M src/android_vr_multiplayer.nit)
	../../bin/nitc -o bin/mineit.apk src/android_vr_multiplayer.nit
	adb install -r bin/mineit_vr_multi.apk

bin:
	mkdir -p bin

desktop_assets: assets/splash.png src/gen/tiles.nit

android_assets: assets/splash.png src/gen/tiles.nit assets/android_controls.png res/drawable-hdpi/icon.png libs/cardboard.jar

# Splash screen
assets/splash.png: art/splash.svg
	inkscape -f art/splash.svg -e assets/splash.png

src/gen/tiles.nit:
	../../bin/nit ../../lib/gamnit/texture_atlas_parser.nit -n tiles assets/spritesheet_tiles.xml > $@

bin/texture_atlas_parser: src/texture_atlas_parser.nit
	${NITC} src/texture_atlas_parser.nit -o $@

# Android control overlay
assets/android_controls.png: art/android_controls.svg
	inkscape -f art/android_controls.svg -e assets/android_controls.png -y 0.0

# Android icons
res/drawable-hdpi/icon.png: art/icon.svg
	mkdir -p res
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

# Download `cardboard.jar`
libs/cardboard.jar:
	curl --progress-bar -o libs/cardboard.jar \
	https://raw.githubusercontent.com/googlesamples/cardboard-java/master/CardboardSample/libs/cardboard.jar

# Generate large icons for the Web
pub/512.png:
	mkdir -p pub
	../inkscape_tools/bin/svg_to_icons art/icon.svg --large --out pub/

v:
	../../bin/nitc --semi-global -o bin/mineit_vr.apk src/android_vr.nit -m ~/projects/nit/lib/android/debug.nit -m src/better_generation.nit
	adb install -r bin/mineit_vr.apk

.nit.apk: $(shell nitls -M src/android.nit)
	../../bin/nitc -o $@ $<

.SUFFIXES: .apk .nit
