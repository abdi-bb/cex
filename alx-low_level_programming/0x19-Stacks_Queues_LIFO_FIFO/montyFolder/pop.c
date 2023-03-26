#include "monty.h"

void pop()
{
    node *temp;

    temp = top;
    top = top->next;
    free(temp);
}