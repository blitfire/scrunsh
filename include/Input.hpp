#pragma once

#include <string>
#include <vector>

class Input {
  std::vector<std::string> history;

  Input() = default;

public:
  Input(const Input&) = delete;
  Input& operator=(const Input&) = delete;

  static Input& get() {
    static Input singleton;
    return singleton;
  }

  std::string getCommand();
};
