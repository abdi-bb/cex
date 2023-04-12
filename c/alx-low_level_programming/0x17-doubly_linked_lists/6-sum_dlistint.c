#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
