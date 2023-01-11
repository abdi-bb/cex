#include <stdio.h>

int main()
{
	int i = 1;
	int a = 1;
	int b = a + 1;
	int c = a + b;

	printf("%d, %d, ", a, b);

	while(i <= 50)
	{
		printf("%d", c);

		if(i < 50)
			printf(", ");
		i++;

		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}
