#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
	char cmd[SIZE];

	while (1)
	{
		printf("Y ");
		fgets(cmd, SIZE, stdin);
		cmd[strlen(cmd) - 1] = '\0';

		char *args[SIZE];
		char *token = strtok(cmd, " ");

		int i = 0;
		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;

		pid_t pid = fork();
		if (pid == 0)
		{
			char *envp[] = { NULL };
			execve(args[0], args, envp);
			perror("N ");
			exit(1);
		}
		else if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			perror("N ");
			exit(1);
		}
	}
	return (0);
}

