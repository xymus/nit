# Mineit, an Infiniminer/Minecraft clone in Nit

Mineit is a minimal but somewhat complete game using the Gamnit framework. It offers a familiar gameplay based on mining and placing blocks in a 3D world. It can be used as a template for a 3D game or to experiment with the framework.

Please note that most modules in the `src` folder contain one _tolerated_ bug each. They come from the overly simplified implementation code. They are identified, within the source code, with a comment containing `BUG`. Try to correct all these bugs to learn Gamnit! 

# Structure

This project has many entry points with different features.

* `minit.nit` is the core module, common to all platforms, with the minimum code to have a working game. It defines the core game logic and hooks that will be used by other modules to add features.
* `linux.nit` and `android.nit` adapt the core module to be playable on different platforms.
    * `linux.nit` use the standalone version of Gamnit for GNU/Linux. With the core module, this is the starting point to understand Mineit.
    * `android.nit` use `app.nit` to run on the Android platform.
* `optimisation.nit`, `persistence.nit`, `multiplayer.nit` and `multiplayer_launcher.nit` are _mods_ that extend the features of the core module.
    * `optimisation.nit` apply a very simple optimization to the core module by _hiding_ the blocks that should not be visible.
    * `persistence.nit` enables the GNU/Linux version of the game to save and load the state of the world. It will save to `mineit.save` in the current directory.
    * `multiplayer.nit` enables client/server games, it is a library and is imported by `multiplayer_launcher.nit`.
	* `multiplayer_launcher.nit` uses a GTK dialog to configure a clients/server game.
* `vr.nit` and `android_vr.nit` implement stereoscopic view and immersive controls for virtual reality play.
	* `vr.nit` is the portable stereoscopic implementation.
	* `android_vr.nit` adapts the game for Google Cardboard using services from the official `cardboard.jar`. It does _not_ import `android.nit` as it doesn't share its UI, controls nor its app meta-data. 

# Features

- [x] FPS style controls
- [x] Basic mining and building
- [x] Optimization mod
- [x] Multiplayer mod
- [x] Saving/loading mod
- [x] VR with Google Cardboard
- [ ] Lighting
- [ ] Bucketed events
- [ ] Basic mob
- [ ] Oculus Rift support

# Compiling and playing

## GNU/Linux

Compile with `make`, it will produce a few executables in `bin/`, each with different mods.
You will probably want to run `bin/mineit`, it has both persistence and optimisation.

* Mine: left mouse button
* Place a block: right mouse button
* Move: `wasd`
* Save: `k`
* Load last save: `l`

## Android standard

Compile and install using `make android`.
Then run on the device using `Mineit Debug`.

* Mine and tap: tap the corresponding icons
* Move forward: tap and hold the forward arrow
* Look around: tap and drag over the eye icon

## Android VR

Compile and install using `make android`.
Then run on the device using `Mineit VR Debug`.

* Mine: gamepad button A
* Place a block: gamepad button B
* Move: left joystick or d-pad
* Save: start
* Load last save: select

# Artwork

The main texture (`assets/terrain.png`) has been created by lithiumsound for the GreatWood texture pack which is licensed under a Creative Commons Attribution-NonCommercial 3.0 Unported License.
