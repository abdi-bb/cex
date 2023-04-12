#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *temp;

	while(str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	temp = *head;
	temp = temp->next;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	temp = new;

	return (temp);
}

