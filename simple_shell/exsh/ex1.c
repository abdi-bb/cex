#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
    size_t len = 1024;
    char *buffer = malloc(1024);
    ssize_t read;

    while (1)
    {
        printf("$ ");
        read = getline(&buffer, &len, stdin);
        if (read == -1)
            break;

        char *av[len];
        char *token = strtok(buffer, " ");
        int i = 0;

        while (token)
        {
            av[i++] = token;
            token = strtok(NULL, " ");
        }
        av[i] = NULL;

        char *path = malloc(1024);
        sprintf(path, "/usr/bin/which %s", av[0]);
        FILE *which_output = popen(path, "r");
        fgets(path, 1024, which_output);
        path[strcspn(path, "\n")] = 0;
        pclose(which_output);

        pid_t pid = fork();
        if (pid == 0) {
            // Child process
            execve(path, av, NULL);
            perror("execve");
            exit(EXIT_FAILURE);
        } else if (pid < 0) {
            perror("fork");
        } else {
            // Parent process
            wait(NULL);
        }
        free(path);
    }
    free(buffer);
    exit(EXIT_SUCCESS);
}

