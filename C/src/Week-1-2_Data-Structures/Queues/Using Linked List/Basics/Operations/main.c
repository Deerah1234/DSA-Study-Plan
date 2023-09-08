#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *front = 0;
node *rear = 0;
int length = 0;

void enqueue(int);
void dequeue();
void display();

void peek();

int main()
{
    system("cls");

    enqueue(5);
    enqueue(4);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    display();

    getchar();

    return (0);
}

void enqueue(int x)
{
    node *newnode;
    newnode = malloc(sizeof(node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
        length++;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        length++;
    }
}

void display()
{
    node *temp = front;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
    printf("length: %d\n", length);
}

void dequeue()
{
    node *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Empty");
    }
    else
    {
        front = front->next;
        length--;
        free(temp);
    }
}

// TODO - Peek operation
