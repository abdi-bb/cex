#include<stdio.h>
#include<string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int d = 0;
    int i, j, len;

    for (i = 0; b[i]; i++)
    {
        if ((b[i] != 0) || (b[i] != 1) || (b == NULL))
            return (0);

        len = strlen(b);
        for(j = len - 1; j >= 0 && b[j]; j--)
            {
                d += (b[j] + '0') * pow(2, b[j]);
            }
            
    }
    return (d);

}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
/*
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
*/