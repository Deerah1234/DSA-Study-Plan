#include <stdio.h>
#include <stdlib.h>

#define N 5
int queue[N];
int front = -1;
int real = -1;

void enqueue(int);
void dequeue();
void display();

int main(void)
{
    system("cls");

    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    display();

    dequeue();
    dequeue();
    display();

    enqueue(9);
    enqueue(8);
    display();

    enqueue(0);

    return (0);
}

void enqueue(int x)
{
    if (front == -1 && real == -1)
    {
        front = real = 0;
        queue[real] = x;
    }
    else if (((real + 1) % N) == front)
    {
        printf("\nQueue is full\n");
    }
    else
    {
        real = (real + 1) % N;
        queue[real] = x;
    }
}

void display()
{
    if (front == -1 && real == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nThe queue is:\n");
        int i = front;
        for (; i != real; i = (i + 1) % N)
        {
            printf("%d\t", queue[i]);
        }
        printf("%d\n", queue[i]);
    }
}

void dequeue()
{
    if (front == -1 && real == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        front = (front + 1) % N;
    }
}
