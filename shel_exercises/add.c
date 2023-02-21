#include <stdio.h>
#include <unistd.h>

int main()
{
	int num1 = 10, num2 = 5;
	pid_t pid, ppid;
	pid = getpid();
	ppid = getppid();

	printf("Sum is: %d\n", num1 + num2);
	printf("Proccess id is: %u\nParent proccess id is: %u\n", pid, ppid);

	return (0);
}
