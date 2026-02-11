// Author: Nathan Tebbs
// Resources: <https://www.raylib.com/examples.html>
// Created: 2026-02-11

#include <raylib.h>

int main(void)
{
	// Init
	const int screenWidth = 640;
	const int screenHeight = 480;

	InitWindow(screenWidth, screenHeight, "Raylib [core] example - basic window");

	SetTargetFPS(60);

	// Game loop
	while (!WindowShouldClose())
	{
		// Update
		// TODO: Update variables here

		// Draw
		BeginDrawing();

			ClearBackground(RAYWHITE);

			DrawText("Hello, World", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	// De-Init
	CloseWindow();

	return 0;
}
