#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node *prev;
} *head, *tail;

void display();
void createDCLL();
void delAtPos();


int main(void)
{
	createDCLL();
	display();
	delAtPos();
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

void delAtPos()
{
	struct node *temp = head;
	int pos, i = 1;

	printf("At what postion do you want to insert: ");
	scanf("%d", &pos);

	while (i < pos)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
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