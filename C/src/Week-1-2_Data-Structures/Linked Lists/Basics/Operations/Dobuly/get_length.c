#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};


int main(void)
{
	struct node *head, *tail, *newnode;
	head = 0;
	int choice = 1; 

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next = 0, newnode->prev = 0;

		if ( head == 0 )
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			tail = newnode;
		}

		printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &choice);
	}
	
	if (!choice)
	{
		lengthNode(head);
	}
	
	return (0);
}

void lengthNode(struct node * head)
{
	int count = 0;
	struct node *temp = head;

	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}

	printf("The length of the Dobuly LL is: %d\n", count);
}