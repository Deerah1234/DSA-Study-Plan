#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


void print_node(struct node *head)
{
	struct node *temp = head;

	while (temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
