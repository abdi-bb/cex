#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
}

