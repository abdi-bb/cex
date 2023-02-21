#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
	char *cmd[] = {"/bin/ls", "-l", NULL};
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(cmd[0], cmd, NULL);
		perror("execve");
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
	return (0);
}

