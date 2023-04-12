#include <stdio.h>

int main()
{
	int i = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);

	while(i < 50)
	{
		printf("%ld", c);
		i++;

		if(i < 50)
			printf(", ");

		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}
