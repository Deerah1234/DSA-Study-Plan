#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = 0;
int length = 0;

void push(int);
void display();
void peek();
void pop();

int main()
{
    push(3);
    push(4);
    push(5);
    display();
    peek();
    pop();
    display();

    return 0;
}

void push(int x)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
    length++;
}

void display()
{
    struct node *temp = top;

    system("cls");
    
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->link;
    }
    printf("\nLength: %d", length);
    printf("\n");
}

void peek()
{
    if(top == 0)
        printf("Empty stack");
    else
    {
        printf("Top: %d\n", top->data);
    }
}

void pop()
{
    struct node *temp = top;

    if(length == 0)
        printf("Empty stack");
    else
    {
        printf("Value: %d\n", temp->data);
        top = temp->link;
        length--;
        free(temp);
    }
}
