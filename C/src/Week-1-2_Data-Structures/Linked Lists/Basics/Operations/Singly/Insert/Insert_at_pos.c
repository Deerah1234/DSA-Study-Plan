#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
} *head;

void insertAtPos();
void display();

int main()
{
	head = 0;
	struct node *temp, *newnode;
	int choice = 1;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter date: ");
		scanf("%d", &newnode->data);
		newnode->next = 0;

		if (head == 0)
		{
			head = temp = newnode;	
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		
		printf("Do you want to continue? (0 or 1): ");
		scanf("%d", &choice);
	}

	if (!choice)
	{
		display();
		insertAtPos();
		display();
	}
}

void display()
{
	struct node *temp = head;

	while (temp != 0)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void insertAtPos()
{
	struct node *temp = head, *newnode;
	int pos;

	if (head == 0)
		printf("Empty list");
	else
	{
		printf("At what position do you want to insert: ");
		scanf("%d", &pos);

		newnode = malloc(sizeof(struct node));
		printf("Enter date you want to insert: ");
		scanf("%d", &newnode->data);

		for (int i = 1; i < pos-1; i++)
		{
			temp = temp->next;
		}
		
		newnode->next = temp->next;
		temp->next = newnode;
	}	
}