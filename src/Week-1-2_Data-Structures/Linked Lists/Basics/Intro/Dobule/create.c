#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

void create(struct node** head);
void display(struct node* head);

int main(void)
{
    struct node* head = NULL;
    create(&head);
    display(head);
    return 0;
}

void create(struct node** head)
{
    struct node* newnode;
    struct node* temp;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = temp = newnode;
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
}

void display(struct node* head)
{
    struct node* temp = head;

    while (temp != NULL)
    {
        printf("%d\t\n", temp->data);
        temp = temp->next;
    }
}
