#include <stdio.h>
#include <stdlib.h>

typedef struct stack_linkedLists
{
    int data; /* data */
    stack_linkedLists *next;
} st_ls;

st_ls *top = NULL;

void push(int x)
{
    st_ls *new_node = (st_ls *)malloc(sizeof(st_ls *));
    new_node->data = x;
    new_node->next = top;
    top = new_node;
}