#include <raylib.h>
#include <stdio.h>

int main(void) {
  // Initialization
  //--------------------------------------------------------------------------------------
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "basic render to texture");

  SetTargetFPS(60); // Set our game to run at 60 frames-per-second
  //--------------------------------------------------------------------------------------

  RenderTexture2D target = LoadRenderTexture(screenWidth, screenHeight);

  // Main game loop
  while (!WindowShouldClose()) {
    BeginDrawing();
    BeginTextureMode(target);

    ClearBackground(BLUE);
    DrawText("THIS IS SOME TEXT RENDERED TO A TEXTURE", 0, 0, 16, BLACK);
    EndTextureMode();
    DrawTextureRec(target.texture, (Rectangle){ 0, 0, target.texture.width, -target.texture.height }, (Vector2){ 0, 0 }, WHITE);
    EndDrawing();
    //----------------------------------------------------------------------------------
  }
  CloseWindow(); // Close window and OpenGL context
}
