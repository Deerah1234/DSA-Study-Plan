#include <stdio.h>
#include <stdlib.h>

#define N 5
int queue[N];
int front = -1;
int real = -1;

void enqueue(int);
void dequeue();
void display();
void peek();

int main()
{
    system("cls");

    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    dequeue();
    display();
    peek();

    getchar();

    return (0);
}

void enqueue(int x)
{
    if (real == N-1)
    {
        printf("Queue is full (overflow condition)");
    }
    else if (front == -1 && real == -1)
    {
        front = real = 0;
        queue[front] = x;
    }
    else
    {
        real++;
        queue[real] = x;
    }
}

void display()
{
    if ( front == -1 && real == -1)
    {
        printf("Queue is full (overflow condition)\n");
    }
    else
    {
        for (int i = front; i <= real; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

void dequeue()
{
    if (front == -1 && real == -1)
    {
        printf("The Queue is empty");
    }
    else if (front == real)
    {
        front = real = -1;
    } 
    else
    {
        front++;
    }
}

void peek()
{
    if (front == -1 && real == -1)
    {
        printf("The Queue is empty\n");
    }
    else
    {
        printf("Front of the queue is: [%d] - %d\n", front, queue[front]);
    }
}
