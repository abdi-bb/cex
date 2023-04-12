#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
    size_t count = 0;
    const list_t *temp;

    temp = h;
    while(temp)
    {
        count++;
        temp = temp->next;
    } 
    return (count);
}