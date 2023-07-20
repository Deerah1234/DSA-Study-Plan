#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


struct node * create(struct node *head)
{
	struct node *temp = head, *newnode;
	int choice = 1;

	while (choice)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next = 0;

		if ( head == 0 )
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		
		printf("Do you want to continue (0 or 1)?: ");
		scanf("%d", &choice);
	}
	
	return head;
}