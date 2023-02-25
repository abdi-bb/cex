#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for(i = n; i <= 98; i++)
		{
			_putchar(i + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	else if(n > 98)
	{
		int j;
		for(j = n; j >= 98; j--)
		{
			_putchar(j + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
