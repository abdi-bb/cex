#include <stdio.h>
#include <stdlib.h>

int main()
{
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);

	printf("Enter name ");
	getline(&buf, &n, stdin);

	printf("Name is %sBuffer size is %lu\n", buf, n);

	free(buf);

	return (0);
}

