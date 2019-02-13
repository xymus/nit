iOS support for _app.nit_

# System configuration

Configure your macOS system for iOS targets by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the Nit repository for basic Nit support.

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

# Compile and run a simple application

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

Compile with: `nitc hello_world.nit`

Run in the simulator with: `ios-sim launch hello_world.app`

# Sample portable applications

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on iOS and Android, but also GNU/Linux, macOS and Windows.

# Application icon

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually. It is in JSON format and easily readable.
