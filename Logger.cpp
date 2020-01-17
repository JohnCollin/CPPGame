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

#include "Logger.h"

namespace cppgame
{
  Logger::Logger(const std::string& logger_name_)
    : logger_name(logger_name_)
  {}

  void Logger::Info(const std::string& logging_message)
  {
    std::cout << "[" << logger_name << "] [INFO]: " << logging_message << std::endl;
  }

  void Logger::Warning(const std::string& logging_message)
  {
    std::cout << "[" << logger_name << "] [WARNING]: " << logging_message << std::endl;
  }

  void Logger::Error(const std::string& logging_message)
  {
    std::cout << "[" << logger_name << "] [ERROR]: " << logging_message << std::endl;
  }
}