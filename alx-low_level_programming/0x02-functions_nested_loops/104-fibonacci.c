#include <stdio.h>

int main()
{
	int i = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while(i < 98)
	{
		printf("%ld", c);
		if (i < 98)
			printf(", ");
		i++;
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}

