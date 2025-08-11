#pragma once

#include <vector>
#include <string>

using Args = std::vector<std::string>;

class Core {
public:
  static void runCommand(const Args& args);
};
