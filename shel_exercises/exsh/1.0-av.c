#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	int i;

	while(av[i])
	{
		printf("%s\n", av[i++]);
	}
	return (0);
}

