#pragma once

#include <cmath>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <string>

using Args = std::vector<std::string>;

class Core {
  Core() = default;

public:
  Core(const Core& c) = delete;
  Core& operator=(const Core&) = delete;

  static Core& get() {
    static Core singleton;
    return singleton;
  }

  static void runCommand(Args& args);
};
