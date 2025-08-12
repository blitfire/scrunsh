#include "Core.hpp"
#include "Input.hpp"

int main() {
  // Args arguments = {"less", "../CMakeLists.txt"};

  while (true) {
    Args arguments = { Input::get().getCommand() };
    Core::runCommand(arguments);
  }

  return 0;
}
