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

#ifndef CPPGAME_GAME_H_
#define CPPGAME_GAME_H_

#include <SFML/Graphics.hpp>

#include "Logger.h"

#endif // CPPGAME_GAME_H_

namespace cppgame
{
  class Game
  {
   public:
    Game(int window_width_, int window_height_, sf::String* window_title_);

    void GameInit();
    void GameLoop();
    void GameUpdate();
    void GameRender();
    void GameExit();
   private:
    int window_width;
    int window_height;

    sf::String* window_title;

    sf::RenderWindow* render_window;

    Logger logger;
  };
}