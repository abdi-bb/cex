#include "main.h"

int print_last_digit(int n)
{
	int result = (n % 10);

	if(result < 0)
		result *= -1;
	
	_putchar(result + '0');

	return (result);
}
