#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
} *head, *tail;

void display();
void insertAtBeg();

int main(void)
{
	head = 0;
	struct node *newnode;
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
		printf("\nOriginal Lists:\n");
		display();
		printf("\nLists after insection:\n");
		insertAtBeg();
		display();
	}
	
	return (0);
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
	printf("Enter data you want to insect at the beginnig: ");
	scanf("%d", &newnode->data);
	newnode->next = 0, newnode->prev = 0;

	head->prev = newnode;
	newnode->next = head;
	head = newnode;
}