#include <stdlib.h>
#include <stdio.h>

void m(int n0, int n1, int n2)
{
	int *arr;

	arr = malloc(sizeof(*arr) * 3);

	arr[0] = n0;
	arr[1] = n1;
	arr[2] = n2;

	int sum = arr[0] + arr[1] + arr[2];

	printf("Sum = %d\n", sum);

	free(arr);
}
int main()
{
	m(98, 402, -1024);

	return (0);
}
