#include "stdafx.h"
#include "game.h"
#include <numbers>

Game::Game()
{
  
}


Game::~Game()
{
}

void Game::init(std::string windowName, unsigned int width, unsigned int height)
{
  window.create(sf::VideoMode(width, height, 32), windowName);
  window.setFramerateLimit(60);
}

void Game::run()
{

  while (window.isOpen())
  {
    handleEvents();
    window.clear();
    draw();
    window.display();
  }
}

void Game::draw() const
{
  sf::Vector2f origin (window.getSize().x / 6.0f, 5.0f * window.getSize().y / 6.0f);
  sf::Vector2f end (5.0f * window.getSize().x / 6.0f, 5.0f * window.getSize().y / 6.0f);
  drawVonKoch(origin, end, recursionLevel);
}
void Game::handleEvents()
{
  sf::Event event;
  //On passe l'événement en référence et celui-ci est chargé du dernier événement reçu!
  while (window.pollEvent(event))
  {
    //x sur la fenêtre
    if (event.type == sf::Event::Closed)
    {
      window.close();
    }
    else if (event.type == sf::Event::KeyReleased)
    {
      if (event.key.code == sf::Keyboard::Key::F1)
      {
        recursionLevel = 1;
      }
      else if (event.key.code == sf::Keyboard::Key::F2)
      {
        recursionLevel=2;
      }
      else if (event.key.code == sf::Keyboard::Key::F3)
      {
        recursionLevel=3;
      }
      else if (event.key.code == sf::Keyboard::Key::F4)
      {
        recursionLevel = 4;
      }
      else if (event.key.code == sf::Keyboard::Key::F5)
      {
        recursionLevel = 5;
      }
      else if (event.key.code == sf::Keyboard::Key::F6)
      {
        recursionLevel = 6;
      }
      else if (event.key.code == sf::Keyboard::Key::F7)
      {
        recursionLevel = 7;
      }
      else if (event.key.code == sf::Keyboard::Key::F8)
      {
        recursionLevel = 8;
      }
      else if (event.key.code == sf::Keyboard::Key::F9)
      {
        recursionLevel = 9;
      }
      
    }
  }
}

void Game::drawVonKoch(const sf::Vector2f& origin, const sf::Vector2f& end, int recursionLevel) const
{
  // A COMPLETER ICI
  
}