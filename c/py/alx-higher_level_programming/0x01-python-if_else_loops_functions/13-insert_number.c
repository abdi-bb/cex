#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *current, *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }

    if (*head == NULL || (*head)->n >= number)
    {
        new->n = number;
        new->next = *head;
        *head = new;
        return (new);
    }
    else
    {
        current = *head;
        while (current->next != NULL && current->next->n < number)
        {
            current = current->next;
        }
        new->n = number;
        new->next = current->next;
        current->next = new;
        return (new);
    }
    return (NULL);
}