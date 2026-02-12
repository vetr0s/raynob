// File: nob.c
// Author: Nathan Tebbs
// Purpose: implementation file for nob.h, foundation of the no build system
// Created: 2026-02-11
#define NOB_IMPLEMENTATION
#include "../include/nob.h"

int main(int argc, char **argv)
{
	// NOTE: two string for the output of the following commands (MacOS
	// Homebrew Only):
	// pkg-config --cflags raylib
	// pkg-config --libs raylib
	
	// TODO: Support cross platform raylib flags

	char *cflags  = "-I/opt/homebrew/Cellar/raylib/5.5/include";
	char *ldpath  = "-L/opt/homebrew/Cellar/raylib/5.5/lib";
	char *ldlib   = "-lraylib";

	// Auto Rebuild
	GO_REBUILD_URSELF(argc, argv);

	// Build Project
	Cmd build = {0};
	cmd_append(&build, "cc", "-Wall", "-Wextra", cflags, ldpath, ldlib, "-o", "build/main", "src/main.c");
	if (!cmd_run(&build)) return 1;

	// Run Project
	Cmd run = {0};
	cmd_append(&run, "build/main");
	if (!cmd_run(&run)) return 1;

	return 0;
}
