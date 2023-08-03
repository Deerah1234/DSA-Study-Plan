#include <stdio.h>
#include <stdlib.h>
#include "util.h"


void display(struct node *head)
{
    struct node *temp = head;

	printf("\nList after insertion:\n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}