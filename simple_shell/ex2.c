#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define SIZE 1024

int main()
{
	pid_t pid;
	char buffer[SIZE];
	// size_t n = 1024;

	// buffer = malloc(sizeof(char) * n);

	while (1)
	{
		printf("$ ");
		fgets(buffer, SIZE, stdin);
		buffer[strlen(buffer) - 1] = '\0';

		char *args[SIZE];
		char *token = strtok(buffer, " ");

		int i = 0;
		while (token)
		{
			//args[i++] = token;
			printf("%s\n", token);
			token = strtok(NULL, " ");
		}
	/*	args[i] = NULL;

		pid = fork();
		if (pid == 0)
		{
			execvp(args[0], args);
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
	//free(buffer);*/
	}
	return (0);
}

