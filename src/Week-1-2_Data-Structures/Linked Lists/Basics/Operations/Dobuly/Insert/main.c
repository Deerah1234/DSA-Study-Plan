#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};


void display(struct node *head);
struct node * insertAtBeg(struct node *head);
struct node * insertAtEnd(struct node *tail);
void insertAtPos(struct node *head);
void lengthNode(struct node * head);


int main(void)
{
	struct node *head, *tail, *newnode;
	head = 0;
	int choice = 1, vote = 0; 

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
		printf("\nOriginal Lists:\n");
		display(head);

		printf("\nDo you want to insert insection?\n");
		printf("\n1: insertAtBeg.\n2: insertAtEnd.\n3: insertAtPos.\n0: exit\n");
		scanf("%d", &vote);

		switch (vote)
		{
			case 1:
				head = insertAtBeg(head);
				display(head);
				break;
			case 2:
				tail = insertAtEnd(tail);
				display(head);
				break;
			case 3:
				insertAtPos(head);
				display(head);
				break;
			case 0:
				break;
		}
	}
	
	return (0);
}

// Display the element in the list
void display(struct node *head)
{
    struct node *temp = head;

	printf("\nList after insertion:\n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert Element at the beginning of the list
struct node * insertAtBeg(struct node *head)
{
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	printf("Enter data you want to insect at the beginnig: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	head->prev = newnode;
	newnode->next = head;
	head = newnode;

	return head;
}

// Insert element at the end of the list
struct node * insertAtEnd(struct node *tail)
{
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	printf("Enter data you want to insect at the end: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	tail->next = newnode;
	newnode->prev = tail;
	tail = newnode;

	return tail;
}

// Insert element at a given position in the list
void insertAtPos(struct node *head)
{
	struct node *newnode, *temp = head;
	int pos, idx = 1;
	printf("Enter postion: ");
	scanf("%d", &pos);

	newnode = malloc(sizeof(struct node));
	printf("Enter data you want to insect at the position: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	while (idx < pos-1)
	{
		temp = temp->next;
		idx++;
	}

	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;
}

// Get the length of the list
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