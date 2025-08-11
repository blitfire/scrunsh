#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <cstdlib>

int main() {
  pid_t pid = fork();
  if (pid == 0) {
      char* args[] = { (char*)"fdisk", (char*)"/dev/sda", nullptr };
      execvp(args[0], args);
      perror("execvp failed");
      exit(1);
  } else if (pid > 0) {
      waitpid(pid, nullptr, 0);
  }

  return 0;
}
