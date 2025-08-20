#include "Input.hpp"
#include "typedefs.hpp"
#include <iostream>
#include <sstream>

Command Input::getCommand() {
  std::string input;
  std::getline(std::cin, input);
  std::stringstream stream;
  stream << input;

  Command out;
  std::string arg;
  while (stream >> arg) out.push_back(arg);
  history.push_back(out);

  return out;
}
