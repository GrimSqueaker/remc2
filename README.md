# Magic Carpet 2 Modern PC Patch
Based off the Reverse engineering of game Magic Carpet 2 from assembler to c/c++ language by Tomas Versly <br />
Forked from Tomas Vesely's repo here: https://github.com/turican0/remc2 <br /><br />
Tomas has done amazing work, not only reverse engineering this code but updating it to use more modern memory allocation and use the SDL library for input and sound. He has even increased the sprite resolutions.

## My intention is to make a patch for Magic Carpet 1 and 2 (GOG editions) that initially will:
- Add more screen resolution options
- Increase draw distance
- Seperate Render and Simulation code so that game speed is not dependent of FPS (or fix FPS)
- Add configuration options for Anaglyph 3D stereoscopic render (because you cannot get the original glasses anymore)
- Enable local multiplayer without NETBIOS

## STATUS: Code now runs though the first level and more. Anyone with the GOG edition can download this repo, extract the Game Assets (from a legal GOG copy of the game) and run it.

## Steps: to build and run this code

### Windows:
- 1: Pull the development branch
- 2: Build the code (you can only compile only 32-bit binary version atm)
- 3: Purchase a copy of Magic Carpet 2 from GOG here: https://www.gog.com/game/magic_carpet_2_the_netherworlds
- 4: Install the Game. Copy the "NETHERW" directory to "remc2\Debug" Folder
- 5: Copy the "Extract" folder to your Game Directory, run extract-GOG-CD.bat. The CD Data will now be copied to a directory called "CD_Files" in the "Extract" directory
- 6: Move "CD_Files" directory into the "remc2\Debug" Folder
- 7: Run

### Linux:
- 1: Pull the development branch
- 2: WIP: Build the code (you can only compile only 32-bit binary version atm)
- 3: Purchase a copy of Magic Carpet 2 from GOG here: https://www.gog.com/game/magic_carpet_2_the_netherworlds
- 4: Download the Windows "Offline Backup Game Installer"
- 5: Make sure that you have `innoextract` and `dosbox` installed
- 6: Run the `extract-GOG-CD.sh` script and provide the path to the GOG installer and the build directory like
```
./extract-GOG-CD.sh ~/Downloads/setup_magic_carpet_2_1.0_\(28044\).exe ~/dev/remc2_release
```
- 7: Run

# ROADMAP:

## MILLSTONE 1
- Get solution runnable from Visual Studio 2019 build, with minimum of setup. Cut down on unnecessary extra files and libraries and use nuget instead.
- Refactor reverse engineered code into seperate classes where possible.

## MILLSTONE 2
- Add resolution support and increase draw distance
- Implemented wix sharp .msi installation for new .exe to make patching the and running existing game simple

## LONG TERM GOALS
- I eventually want to implement an Open GL render with multisampling for the terrain and some shadow-mapped lighting (I am not sure what SDL supports as it is middleware not really intended for more advanced rendering, but I will have to investigate)<br />
- Add VR support back into the game (yes it was originally supported! This game was waaay ahead of its time)<br />
- Support Linux and Mac OS versions.

## If you know a bit about game development or want to help out, branch away or email me via GitHub
