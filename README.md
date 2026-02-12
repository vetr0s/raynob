# The Idea

is to use [nob.h](https://raw.githubusercontent.com/tsoding/nob.h/refs/heads/main/nob.h) alongside [Raylib v5.5](https://github.com/raysan5/raylib/releases/tag/5.5) to make a game.

## NOBuild System Notes

To build the project from source make sure to follow the guide for MacOS [here](https://github.com/raysan5/raylib/wiki/Working-on-macOS). I plan on implementing cross platform support for Linux and MacOS soon and Windows later on. Otherwise:

```sh
cc -o build/nob src/nob.c
./build/nob
```

Note: since the go rebuild yourself flag is on after the initial bootstrap you can just:

```sh
./build/nob
```

to automatically rebuild nob itself syncing any changes made to `src/nob.c`
