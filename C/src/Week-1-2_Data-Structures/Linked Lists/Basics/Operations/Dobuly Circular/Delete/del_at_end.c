#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node *prev;
} *head, *tail;

void display();
void delAtEnd();
void createDCLL();


int main(void)
{
	createDCLL();
	display();
	delAtEnd();
	display();
	return (0);
}

void createDCLL()
{
	struct node *newnode;
	head = 0;
	int choice = 1;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter date: ");
		scanf("%d", &newnode->data);

		if ( head == 0 )
		{
			head = tail = newnode;
			head->next = head;
			head->prev = head;
		}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			newnode->next = head;
			head->prev = newnode;
			tail = newnode;
		}
		
		printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &choice);
	}
}

void delAtEnd()
{
	struct node *temp = tail;

	if (head == 0)
	{
		printf("empty");
	}
	else if (head->next == head)
	{
		head = tail = 0;
		free(temp);
	}
	else
	{
		tail = tail->prev;
		tail->next = head;
		head->prev = tail;
		free(temp);
	}
}

void display()
{
	struct node *temp;
	temp = head;

	while (temp != tail)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
}