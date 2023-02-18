#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
	char *cmd = malloc(1024);
	size_t len = 1024;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&cmd, &len, stdin);
		if (read == -1)
			break;

		char *args[len];
		char *token = strtok(cmd, "\n");
		int i = 0;

		while (token)
		{
			args[i++] = token;
			token = strtok(NULL, "\n");
		}
		args[i] = NULL;

		pid_t pid = fork();
		if (pid == 0)
		{
			execve(args[0], args, NULL);
			perror("execve");
		}
		else if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
	}
	free(cmd);
	exit(EXIT_SUCCESS);
}

