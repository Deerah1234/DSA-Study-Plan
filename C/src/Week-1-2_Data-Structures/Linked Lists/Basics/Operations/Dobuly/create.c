#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node * create(struct node *head);
void display(struct node *head);


int main(void)
{
    struct node *head = 0;
    head = create(head);
    display(head);
    return (0);
}

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
        newnode->prev = 0;

        if ( head == 0 )
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &choice);
    }
    
    return head;
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