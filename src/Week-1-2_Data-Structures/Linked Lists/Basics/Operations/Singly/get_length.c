#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void get_length(struct node *head);


int main() {
	struct node *newnode, *temp, *head;
	head = NULL;
	int choice = 1;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		newnode -> next = NULL;
		printf("Enter value: ");
		scanf("%d", &newnode->data);

		if ( head == NULL ) {
			head = temp = newnode;
		} else {
			temp->next = newnode;
			temp = newnode;
		}

		printf("Do you want to continue? (0 or 1): ");
		scanf("%d", &choice);
	}

	if (!choice) 
	{
		get_length(head);
	}

	return 0;
}

void get_length(struct node *head)
{
	int count = 0;
	struct node *temp = head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	printf("\nLength of node: %d\n", count);
}
