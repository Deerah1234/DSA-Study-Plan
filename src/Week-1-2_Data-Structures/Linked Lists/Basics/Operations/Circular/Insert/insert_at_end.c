#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

struct node * insertAtEnd(struct node *tail);
void display(struct node *tail);

int main(void)
{
	struct node *head, *newnode, *tail;
	head = 0;
	int choice = 1;

	while (choice)
	{
		// Creating new node
		newnode = malloc(sizeof(struct node));
		printf("Enter date: ");
		scanf("%d", &newnode->data);
		newnode->next = 0;

		// Check if head is empty or not
		if (head == 0)
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		tail->next = head;

		printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &choice);
	}
	
	if(!choice) 
	{
		tail = insertAtEnd(tail);
		display(tail);
	}

	return (0);
}

struct node * insertAtEnd(struct node *tail)
{

	struct node *newnode;

	// Creating new node
	newnode = malloc(sizeof(struct node));
	printf("Enter date you want to insert at the end: ");
	scanf("%d", &newnode->data);
	newnode->next = 0;

	// insert at end
	newnode->next = tail->next;
	tail->next = newnode;
	tail = newnode;

	return tail;
}

void display(struct node *tail) 
{
	struct node *temp = tail->next;

	if (tail == 0)
	{
		printf("tail is empty");
	}
	else
	{
		while (temp->next != tail->next)
		{
			printf("%d\t", temp->data);
			temp = temp->next;
		}
		printf("%d\n", temp->data);
	}
}