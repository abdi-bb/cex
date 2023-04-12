#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
