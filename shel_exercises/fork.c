#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}
	if (pid == 0)
	{
		sleep(5);
		printf("I am the child\n");
	}
	else
	{
		printf("I am the parent\n");
	}
	return (0);
}
