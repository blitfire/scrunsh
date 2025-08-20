#pragma once

#include "typedefs.hpp"
#include <string>
#include <vector>

class Input {
  std::vector<Command> history;

  Input() = default;

public:
  Input(const Input&) = delete;
  Input& operator=(const Input&) = delete;

  static Input& get() {
    static Input singleton;
    return singleton;
  }

  Command getCommand();
};
