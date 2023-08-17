#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};


struct node *top = 0;

void push(int);
void display();
void peek();
void pop();

int main(void)
{
    push(3);
    push(4);
    push(5);
    pop();
    display();
    peek();

    return (0);
}

void push(int x)
{
   struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> link = top;
    top = newnode;
}

void display()
{
    struct node *temp = top;
    if ( top == 0 )
        printf("Empty stack Linked List");
    else
    {
        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }
}

void peek()
{
    if ( top == 0 )
        printf("Empty stack Linked List");
    else
        printf("Top: %d\n", top->data);
}

void pop()
{
    struct node *temp = top;
    if ( top == 0 )
        printf("Empty stack Linked List");
    else
    {
        printf("value: %d\n", top->data);
        top = top->link;
        free(temp);
    }  
}
