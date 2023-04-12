#include "monty.h"

void swap()
{
    int temp;
    
    temp = top->data;
    top->data = top->next->data;
    top->next->data = temp;
}