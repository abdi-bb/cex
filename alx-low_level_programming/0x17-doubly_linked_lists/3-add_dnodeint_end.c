#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->prev = *head;
		new->next = NULL;
		*head = new;
		return (new);
	}
	
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	new->n = n;
	new->prev = temp;
	new->next = NULL;
	temp->next = new;

	return (new);
}
