#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_bit(unsigned long int n, unsigned int index)
{
  if (index >= (sizeof(unsigned long int) * 8))
    return (-1);
    
  return (n & (1 << index));
}

int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}