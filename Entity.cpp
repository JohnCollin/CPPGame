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

#include "Entity.h"

namespace cppgame
{
  Entity::Entity(double x_, double y_, int width_, int height_)
    : x(x_), y(y_), width(width_), height(height_)
  {}

  double Entity::GetX()
  {
    return x;
  }

  void Entity::SetX(double x_)
  {
    x = x_;
  }

  double Entity::GetY()
  {
    return y;
  }

  void Entity::SetY(double y_)
  {
    y = y_;
  }

  int Entity::GetWidth()
  {
    return width;
  }

  void Entity::SetWidth(int width_)
  {
    width = width_;
  }

  int Entity::GetHeight()
  {
    return height;
  }

  void Entity::SetHeight(int height_)
  {
    height = height_;
  }
}