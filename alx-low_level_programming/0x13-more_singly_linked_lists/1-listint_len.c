#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h)
{
    size_t count = 0;
    const listint_t  *temp = h;

    while(temp)
    {
        count++;
        temp = temp->next;
    }
    return (count);
}

int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
/*
-> 2 elements
*/