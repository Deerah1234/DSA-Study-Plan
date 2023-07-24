#include <stdio.h>
#include <stdlib.h>
#include "util.h"


struct node * insertAtBeg(struct node *head)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter data you want to insect at the beginnig: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	head->prev = newnode;
	newnode->next = head;
	head = newnode;

	return head;
}
