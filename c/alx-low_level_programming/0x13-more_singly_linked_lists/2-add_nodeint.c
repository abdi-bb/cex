#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->next = (*head);
    (*head) = new;

    return (new);
}

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    const listint_t *temp = h;

    while(temp)
    {
        printf("%d\n", temp->n);
        count++;
        temp = temp->next;
    }
    return (count);
}

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
/*
1024
402
98
4
3
2
1
0
*/