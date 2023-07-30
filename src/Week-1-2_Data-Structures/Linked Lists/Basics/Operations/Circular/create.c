#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};


void display(struct node *head);


int main(void)
{
	struct node *head, *newnode, *temp;
	head = 0;
	int choice = 1;

	while (choice)
	{
		// Creating new node
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next = 0;

		// Check if head is empty or not
		if (head == 0)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		temp->next = head; // circular (store the head node address)
		
		printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &choice);
	}

	if(!choice) 
	{
		display(head);
	}
	
	return (0);
}

void display(struct node *head) 
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