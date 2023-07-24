#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
} *head;


void display();


int main(void)
{
	head = 0;
	struct node *newnode, *temp;
	int choice = 1;

	while (choice)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
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
		temp->next = head; // circular
		
		printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &choice);
	}

	if(!choice) 
	{
		display();
	}
	
	return (0);
}

void display() 
{
	struct node *temp = head;

	if (head == 0)
	{
		printf("Head is empty");
	}
	else
	{
		while (temp->next != head)
		{
			printf("%d\t", temp->data);
			temp = temp->next;
		}
		printf("%d\n", temp->data);
	}
}