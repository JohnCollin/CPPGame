// MIT License
//
// Copyright(c) 2020 Collin Johnson
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this softwareand associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright noticeand this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "Game.h"

namespace cppgame
{
  Game::Game(int window_width_, int window_height_, sf::String* window_title_)
    : window_width(window_width_), window_height(window_height_), window_title(window_title_), logger("CPPGame")
  {
    render_window = new sf::RenderWindow(sf::VideoMode(window_width, window_height), *window_title);
  }

  void Game::GameInit()
  {
    render_window->setVerticalSyncEnabled(true);

    logger.Info("Initializing CPPGame v1.0.0...");
  }

  void Game::GameLoop()
  {
    logger.Info("Starting Game Loop...");

    while (render_window->isOpen())
    {
      sf::Event event;
      while (render_window->pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
        {
          render_window->close();
        }
      }

      GameUpdate();
      GameRender();
    }
  }

  void Game::GameUpdate()
  {}

  void Game::GameRender()
  {
    render_window->clear(sf::Color::Black);
    
    // TODO Render Objects Here

    render_window->display();
  }

  void Game::GameExit()
  {
    logger.Info("Exiting CPPGame v1.0.0...");
  }
}