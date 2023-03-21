#include <stdio.h>
#include <stdlib.h>

//  A = |-1|0|1|2|3|4|5|6|7|...|101|
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x)
{
    if (top == (MAX_SIZE - 1))
    {
        printf("Error: Stack overflow\n");
        return;
    }
    A[++top] = x;
}

void pop()
{
    if (top == -1)
    {
        printf("Error: No element to remove\n");
    }
    printf("The removed element is: %d", A[top]);
    top--;
}

int Top()
{
    return (A[top]);
}

void print()
{
    int i;
    printf("Stack: ");
    for(i = 0; i <= top; i++)
    {
        printf("%d, ", A[i]);
    }
    printf("\n");
}

int main()
{
    push(2); print();
    push(4); print();
    push(6); print();
    push(8); print();
    pop(); print();
    push(10); print();
    // int t = Top();
    // printf("%d", t);
}