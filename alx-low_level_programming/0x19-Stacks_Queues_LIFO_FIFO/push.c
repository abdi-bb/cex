#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
    char value_str = strtok(NULL, " \n\t\r");
    int value;

    if (!value_str || !is_integer(value_str))
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }
    value = atoi(value_str);

    stack_t *new_node;
    new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (!*stack)
        *stack = new_node;
    else
    {
        new_node->next = *stack;
        (*stack)->prev = new_node;
        *stack = new_node;
    }
}