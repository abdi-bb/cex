#include "monty.h"

void push(int x)
{
    node * new_node = malloc(sizeof(node));
    new_node->data = x;
    new_node->next = top;
    top = new_node;
}