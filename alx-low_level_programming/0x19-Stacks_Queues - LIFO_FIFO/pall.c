#include "monty.h"

void pall(stack_t **top, unsigned int line_number)
{
    stack_t *temp;
    
    temp = *top;
    while (temp)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
    
}