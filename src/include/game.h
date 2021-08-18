#ifndef GAME_H
#define GAME_H

#include <iostream>
using namespace std;
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <fstream>
#include <vector>

#include "audio.h"
#include "object.h"
#include "entity.h"

#include <tmxlite/Map.hpp>
#include <tmxlite/Layer.hpp>
#include <tmxlite/TileLayer.hpp>
#include <tmxlite/ObjectGroup.hpp>

class Game {
public:
  Game();
  ~Game();
  void loop();
  void update();
  void input();
  void render();
  void draw(Object o);
  void draw(const char* msg, int x, int y, int r, int g, int b);
  void loadMap(const char* filename);
  void drawMap();
  void scroll(int x, int y);
  bool collision(Object a, Object b);
private:
  SDL_Renderer* ren;
  SDL_Window* win;
  TTF_Font *font;
  bool running;
  int count;
  int frameCount, timerFPS, lastFrame;
  int mousex, mousey;
  Entity player;
  vector<Object> map;
  int mapX, mapY;
  int speed;
  bool l, r, u, d, fall;
  int idoll, idolr, runl, runr;

  const int WIDTH = 800, HEIGHT = 450;
  const int TILE_SIZE = 16;
  const int GRAV = 10;
};

#endif //GAME_H
