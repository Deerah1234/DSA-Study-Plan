#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
} *head;

void insertAtBeg();
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
		insertAtBeg();
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


void insertAtBeg()
{
	struct node *newnode;

	newnode = malloc(sizeof(struct node));
	printf("Enter date you want to insert at the beginning: ");
	scanf("%d", &newnode->data);

	newnode->next = head;
	head = newnode;
}
