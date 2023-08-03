#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node *prev;
} *head, *tail;


void display()
{
	struct node *temp;
	temp = head;

	while (temp != tail)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
}