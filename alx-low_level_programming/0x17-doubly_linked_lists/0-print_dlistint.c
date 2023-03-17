#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
    /*
    dlistint_t *temp;

    // temp = h;
    int count = 0;
    while (h->next != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }
    return (count);
    
}
*/
