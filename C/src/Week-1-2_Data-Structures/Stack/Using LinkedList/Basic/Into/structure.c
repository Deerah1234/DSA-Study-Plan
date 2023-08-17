#include <stdio.h>

struct node
{
    int data;
    struct node *link;
} typedef node;

node *top = 0;
