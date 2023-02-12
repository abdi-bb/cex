#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);

    if ((n & 1) == 0)
        _putchar('0');
    else
        _putchar('1');

}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}

/*
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
*/