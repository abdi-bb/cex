#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_LEN 1024

int main(void) {
  char command[MAX_LEN];

  while (1) {
    printf("$ ");
    fgets(command, MAX_LEN, stdin);

    // Remove the trailing newline character
    command[strlen(command) - 1] = '\0';

    // Split the command line into arguments
    char *args[MAX_LEN];
    char *token = strtok(command, " ");
    int i = 0;
    while (token != NULL) {
      args[i++] = token;
      token = strtok(NULL, " ");
    }
    args[i] = NULL;

    // Fork the process
    pid_t pid = fork();
    if (pid == 0) {
      // Child process
      execvp(args[0], args);
      perror("execvp");
      exit(1);
    } else if (pid > 0) {
      // Parent process
      wait(NULL);
    } else {
      perror("fork");
      exit(1);
    }
  }

  return 0;
}
