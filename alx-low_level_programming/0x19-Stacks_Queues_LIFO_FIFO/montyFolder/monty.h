#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;

// node *top;

void push(int x);
void display();
void pop();
void swap();
void add();

#endif /* MONTY_H */