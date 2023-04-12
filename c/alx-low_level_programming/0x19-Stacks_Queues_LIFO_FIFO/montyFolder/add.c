#include "monty.h"

void add()
{
    node *temp;

    temp = top;
    top->next->data = top->data + top->next->data;
    top = top->next;
    free(temp);
}