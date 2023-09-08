#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int);
void display();
void dequeue();
void peek();

int main(void)
{
    system("cls");

    enqueue(2);
    enqueue(-1);
    enqueue(5);
    display();
    dequeue();
    peek();

    return (0);
}

void enqueue(int x)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if (rear == 0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue()
{
    if (front == 0)
    {
        printf("Empty queue");
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void peek()
{
    if (front == 0)
    {
        printf("Empty queue");
    }
    else
    {
        printf("Front of the queue is: %d\n", front->data);
    }
}

void display()
{
    if (front == 0)
    {
        printf("Empty queue");
    }
    else
    {
        struct node *temp = front;
        // Using While
        // while (temp->next != front)
        // {
        //     printf("%d\t", temp->data);
        //     temp = temp->next;
        // }
        // printf("%d\n", temp->data);
        // Using Do-While
        do
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }
}
