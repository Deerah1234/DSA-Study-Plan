#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

void display(struct node *head);
void delFromPos(struct node *head);

int main(void)
{
	struct node *head, *tail, *newnode;
	head = 0;
	int choice = 1;

	    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;

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

	if(!choice)
	{
		printf("\nOrignial List\n");
		display(head);
		delFromPos(head);
		display(head);
	}

	return (0);
}

void display(struct node *head)
{
    struct node *temp = head;

    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delFromPos(struct node *head)
{
	struct node *temp = head;
	int pos, i = 1;

	printf("Enter postion you want to insert: ");
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