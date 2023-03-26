#include "monty.h"

void pint(stack_t **top, unsigned int line_number)
{
    if (!*top)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*top)->n)
}