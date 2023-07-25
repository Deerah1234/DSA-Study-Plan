#include <stdio.h>
#include <stdlib.h>
#include "util.h"


void insertAtPos(struct node *head)
{
	struct node *newnode, *temp = head;
	int pos, i = 1;
	printf("Enter postion: ");
	scanf("%d", &pos);

	newnode = malloc(sizeof(struct node));
	printf("Enter data you want to insect at the position: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	while (i < pos-1)
	{
		temp = temp->next;
		i++;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;
}