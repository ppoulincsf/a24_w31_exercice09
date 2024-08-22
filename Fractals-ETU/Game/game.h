#pragma once
#include "stdafx.h"

class Game
{
private:
  int recursionLevel = 1;
  mutable sf::RenderWindow window;

  void handleEvents();
public:
  Game();
  ~Game();
  void init(std::string windowName, unsigned int width, unsigned int height);
  void run();


private:
  void draw() const;
  void drawVonKoch(const sf::Vector2f& origin, const sf::Vector2f& end, int recursionLevel) const;
};

