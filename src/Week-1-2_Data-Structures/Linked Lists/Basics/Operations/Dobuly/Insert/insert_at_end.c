#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
} *head, *tail;

void insertAtEnd()
{
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	printf("Enter data you want to insect at the end: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	tail->next = newnode;
	newnode->prev = tail;
	tail = newnode;
}