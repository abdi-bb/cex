// prime number checking
#include <stdio.h>

void main()
{
    int num;
    int m = 0;
    int i;
    int flag = 0;

    printf("Enter a number to be checked: ");
    scanf("%d", &num);

    m = num / 2;

    for (i = 2; i <= m; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime", num);
            flag = 1;
            break;
        }

    }
    if (flag == 0)
    {
        printf("%d is prime", num);
    }
}