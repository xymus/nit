Tools to load and interpret mods (plugins) from a host compiled program

In this scenario, there are three different actors:
* The end user who downloads mods, unpacks then in a specific folder, launches the game and select mods to use.
  We don't expect them to have any technical knowledge
* The mod creator writes Nit code using a limited API specific to the game.
  They are responsible to test their code, package the mod and publish it.
* The game creator selects the services to expose in the public API using the annotations,
  generate the public API and make it available to mod creators.
  They document the exposed services, which can be called and which can be redefined.
  They implement `modapi::host` in their program

In this document, we discuss only of the mod creator and the host creator.

# For mod creators (writing a guest program)

## Learn Nit

## Get an api

## Write mod

## Test mod

## Publish mod

# For modded program creator (writing a host program)

## Generate public mod API

The tool `nitmodapi` generates a thin Nit API to be used by mods.

## Generate mod loader

for custom interns
for redefs

## Annotations

## Load mods

# Features and limitations

- [ ] Call host from guest
- [ ] Call guest from host (one to one)
- [ ] Redef host from guest (one to many)
- [ ] Guest specialization of interfaces
- [ ] Guest specialization of ordinary classes
- [ ] Public nitunits
- [ ] Sanity testing tool
- [ ] Make everything intern
- [ ] Sandbox
- [ ] On demand features (web access, disk access, etc.)
- [ ] Mod collection management
