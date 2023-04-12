#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

void free_listint2(listint_t **head)
{
    listint_t *temp = *head;

    while(*head)
    {
        temp = temp->next;
        free(*head);
        *head = temp;
    }
    *head = NULL;
}
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *temp = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    if ((*head) == NULL)
    {
        (*head) = new;
        return (new);
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;

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
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
