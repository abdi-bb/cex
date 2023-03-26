#include "monty.h"

void display()
{
    node *temp;

    temp = top;
    while (temp)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    
}