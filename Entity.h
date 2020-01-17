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

#ifndef CPPGAME_ENTITY_ENTITY_H_
#define CPPGAME_ENTITY_ENTITY_H_

#include <SFML/Graphics.hpp>

#endif // CPPGAME_ENTITY_ENTITY_H_

namespace cppgame
{
  class Entity
  {
   public:
    Entity(double x_, double y_, int width_, int height_);

    double GetX();
    void SetX(double x_);
    double GetY();
    void SetY(double y_);
    int GetWidth();
    void SetWidth(int width_);
    int GetHeight();
    void SetHeight(int height_);
   private:
    double x;
    double y;
    int width;
    int height;
  };
}