#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Unsuccessful");
	}
	if (pid == 0)
	{
		printf("child process\n");
	}
	else
	{
		wait(NULL);
		printf("parent process\n");
	}
	return (0);
}

