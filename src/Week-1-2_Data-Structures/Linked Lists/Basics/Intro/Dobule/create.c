#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

void create(struct node *head);
void display(struct node *head);


int main(void)
{	
	struct node *head = 0;
	create(head);
	display(head);
	return (0);
}

void create(struct node *head)
{
	struct node *newnode, *temp;
	int choice = 1;

	while (choice)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter date: ");
		scanf("%d", &newnode->data);
		newnode -> prev = 0;
		newnode -> next = 0;

		if (head == 0)
		{
			head = temp = newnode;
		}
		else
		{
			temp -> next = newnode;
			newnode -> prev = temp;
			temp = newnode;
		}

		printf("Do you want to contine?: (0 or 1): ");
		scanf("%d", &choice);
	}
}

void display(struct node *head) 
{
	struct node *temp = head;

	while ( temp != 0 )
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
}