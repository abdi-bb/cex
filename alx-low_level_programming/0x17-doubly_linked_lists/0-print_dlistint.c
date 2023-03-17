#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	/*
    size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
*/
    const dlistint_t *temp;
    size_t count;

    temp = h;
    count = 0;
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        count++;
        temp = temp->next;
    }
    return (count);
    
}
