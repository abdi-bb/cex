#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
		if (count == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
