#include "Core.hpp"

int main() {
  Args arguments = {"less", "../CMakeLists.txt"};
  Core::runCommand(arguments);

  return 0;
}
