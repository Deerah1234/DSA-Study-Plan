#include <stdio.h>
#include <stdlib.h>
#include "util.h"


struct node * insertAtEnd(struct node *tail)
{
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	printf("Enter data you want to insect at the end: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	tail->next = newnode;
	newnode->prev = tail;
	tail = newnode;

	return tail;
}