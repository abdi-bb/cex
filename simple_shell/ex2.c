#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
	pid_t pid;
	char buffer[];
	// size_t n = 1024;

	// buffer = malloc(sizeof(char) * n);

	while (1)
	{
		printf("$ ");
		fgets(buffer, 1024, stdin);

		char *args[1024];
		char *token = strtok(buffer, " ");

		int i = 0;
		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;

		pid = fork();
		if (pid == 0)
		{
			execvp(args[0], args, NULL);
			perror("execvp");
			exit(1);
		}
		else if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			perror("fork");
			exit(1);
		}
	}
	free(buffer);
	return (0);
}

