#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * check_cycle - Checks if a list has a cycle or not.
 * @list - The list to be checked.
 * 
 * Return: 0 if there is no cycle, 1 if there is a cycle.
*/
int check_cycle(listint_t *list)
{
    listint_t *slow, *fast;

    if (list == NULL)
    {
        return (1);
    }
    slow = list;
    fast = list->next;
    while (slow != fast)
    {
        if (fast == NULL || fast->next == NULL)
        {
            return (1);
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return (0);
    
}
