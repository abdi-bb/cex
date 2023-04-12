#include "monty.h"

void pop(stack_t **top, unsigned int line_number)
{
    stack_t *temp;

    if (!*top)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    temp = *top;
    *top = (*top)->next;

    if (*top)
        (*top)->prev = NULL;

    free(temp);
}