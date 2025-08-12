#include "Core.hpp"

void Core::runCommand(Args& args) {
  pid_t pid = fork();
  if (pid == 0) {
    std::vector<char*> argv;
    argv.reserve(args.size());

    for (auto& a : args) {
      argv.push_back(a.data());
    }
    argv.push_back(nullptr);

    execvp(argv.front(), argv.data());
    perror("execvp failed"); // Replace with proper try/exception
    exit(1);

  } else if (pid > 0) {
    waitpid(pid, nullptr, 0);
  }
}
