#include "Input.hpp"
#include <iostream>

std::string Input::getCommand() {
  std::string cmd;
  std::getline(std::cin, cmd);
  history.push_back(cmd);

  return cmd;
}
