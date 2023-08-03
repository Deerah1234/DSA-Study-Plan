#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

void insertAtPos(struct node *tail);
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
		insertAtPos(tail);
		display(tail);
	}

	return (0);
}

void insertAtPos(struct node *tail)
{

	struct node *newnode, *temp = tail->next;
	int pos, i = 1;

	// What postion to insert
	printf("At what postion do you want to insert: ");
	scanf("%d", &pos);

	// Creating new node
	newnode = malloc(sizeof(struct node));
	printf("Enter date you want to insert at the position: ");
	scanf("%d", &newnode->data);
	newnode->next = 0;

	while (i < pos-1)
	{
		temp = temp->next;
		i++;
	}
	// insert at given postion
	newnode->next = temp->next;
	temp->next = newnode;
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