#include <stdio.h>

int main()
{
	long int sum = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	while (c <= 4000000)
	{
		if (c % 2 == 0)
			sum += c;

		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", sum);
	return (0);
}


