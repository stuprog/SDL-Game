# SDL2 game animation -LIMITLESS
![image](https://user-images.githubusercontent.com/69085906/168177859-ea2c8875-bd9b-4c37-8d72-9f443d10d3ce.png)

This project is written in C and uses [CMake][] as a build system.<br>
It shows how we can make a basic animation using [SDL2][SDL] : Flying plane.


It could be used as a base for any SDL2 game. Just fork it, clone it and
execute the `rename_project.sh` script. You will be prompted to enter the new
project name, the new executable name and the new git repository, but you can
keep the autodetected values. Finally, just commit and push the result to your
repository.

## Description 
![game screen](https://user-images.githubusercontent.com/69085906/168328038-cd0e8034-7eba-4be5-a663-a8a2dc701d61.png)

In my Freshman year we developed this game which was part of the ISS Course project at the Mediterranean 
Institue of Technology (Medtech). The concept of the game that The player will play with a hero character and he will fight enemies to survive. After, he finished the first map he will go throw a portal to go to the next map.

## Authors / Original developers
The project was developed by:
- [Amine Ben Hassouna](https://github.com/aminosbh)
- [Sami Chakroun](https://github.com/stuprog)
- [Anis Mahmoud](https://github.com/Aniswashere)
## Contributing
We appreciate your interest in our porject.You have many ways to contribute:
- Source Code
- Unit tests
- Bug Reports
- Documentation
- Localization
- Etc

If you have a new feature idea or if you find an error don't hesitate to do a pull request.

All contributions need to be under the Mit license terms [MIT](LICENSE).
## Dependencies
- [Git][]
- C Compiler (gcc, ...)
- [CMake][]
- [SDL2][SDL] library
- [SDL2_image][] library
- [SDL2_gfx][] library

**On Debian/Ubuntu based distributions, use the following command:**

```sh
sudo apt install git build-essential pkg-config cmake cmake-data libsdl2-dev libsdl2-image-dev libsdl2-gfx-dev
```

**Optional packages:**

- [SDL2_ttf][] library
- [SDL2_net][] library
- [SDL2_mixer][] library

```sh
sudo apt install libsdl2-ttf-dev libsdl2-net-dev libsdl2-mixer-dev
```

## Build instructions

```sh
# Clone this repo
git clone https://gitlab.com/aminosbh/flying-plane-sdl-animation.git
cd flying-plane-sdl-animation

# Create a build folder
mkdir build
cd build

# Build
cmake ..
make

# Run
./flying-plane-sdl-animation
```

***Note:*** To use SDL2_ttf, SDL2_net or SDL2_mixer, you should uncomment some
instructions in the CMakeLists.txt file and re-execute the `make` command.

### Open the project with an IDE under Linux

See [IDE_USAGE.md](IDE_USAGE.md) for details.

## License

Author: Amine B. Hassouna [@aminosbh](https://gitlab.com/aminosbh)

- [Sami Chakroun](https://github.com/stuprog)
- [Anis Mahmoud](https://github.com/Aniswashere)

This project is distributed under the terms of the MIT license
[&lt;LICENSE&gt;](LICENSE).


The images under the assets directory are distributed under different licenses:

- `plane.png` and `plane-shadow.png`:<br>
  Author: Amine B. Hassouna [@aminosbh](https://gitlab.com/aminosbh)<br>
  License: [Creative Commons Attribution 4.0 International License.][CCBY]

- `ocean.jpg`:<br>
  Author: [the3rdSequence.com](https://www.the3rdsequence.com)<br>
  License: [Creative Commons Attribution 4.0 International License.][CCBY]<br>
  Site: https://www.the3rdsequence.com/texturedb/texture/23/sea+water



[SDL]: https://www.libsdl.org
[CMake]: https://cmake.org
[Git]: https://git-scm.com
[SDL2_image]: https://www.libsdl.org/projects/SDL_image
[SDL2_ttf]: https://www.libsdl.org/projects/SDL_ttf
[SDL2_net]: https://www.libsdl.org/projects/SDL_net
[SDL2_mixer]: https://www.libsdl.org/projects/SDL_mixer
[SDL2_gfx]: http://www.ferzkopp.net/wordpress/2016/01/02/sdl_gfx-sdl2_gfx
[CCBY]: http://creativecommons.org/licenses/by/4.0/
