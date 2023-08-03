#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "utils.c"


int main(void)
{
	struct node *head, *tail, *newnode;
	head = 0;
	int choice = 1, user_choice = 0; 

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
		scanf("%d", &user_choice);

		switch (user_choice)
		{
			case 1:
				head = insertAtBeg(head);
				printf("\nList after insertion:\n");
				display(head);
				break;
			case 2:
				tail = insertAtEnd(tail);
				printf("\nList after insertion:\n");
				display(head);
				break;
			case 3:
				printf("\nList after insertion:\n");
				insertAtPos(head);
				display(head);
				break;
			case 0:
				break;
		}
	}
	
	return (0);
}