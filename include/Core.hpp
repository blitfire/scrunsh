#pragma once

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "typedefs.hpp"

class Core {
  Core() = default;

public:
  Core(const Core& c) = delete;
  Core& operator=(const Core&) = delete;

  static Core& get() {
    static Core singleton;
    return singleton;
  }

  static void runCommand(Command& args);
};
