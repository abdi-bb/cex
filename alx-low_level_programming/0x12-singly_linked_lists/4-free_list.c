#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	list_t *temp;

	while(head)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
