#include <stdio.h>
#include <stdlib.h>

#define N 5
int queue[N];
int front = -1;
int real = -1;

void enqueue(int);
void display();

int main()
{
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
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
        printf("Queue is full (overflow condition)");
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

// TODO - Other operations
