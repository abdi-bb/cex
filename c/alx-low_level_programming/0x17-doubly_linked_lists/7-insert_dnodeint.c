#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count;

	temp = *h;
	new = malloc(sizeof(dlistint_t));

	while (temp)
	{
		count++;
		temp = temp->next;
		if (count == idx)
		{
			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			return (new);
		}
	}
	return (NULL);
}
