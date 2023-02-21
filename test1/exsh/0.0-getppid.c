#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t ppid = getppid();
	printf("%u\n", ppid);

	return (0);
}

