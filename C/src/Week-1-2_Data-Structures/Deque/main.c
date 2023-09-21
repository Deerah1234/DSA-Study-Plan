#include <stdio.h>
#include <stdlib.h>

#define N 5
int deque[N];
int f = -1, r = -1;

void enqueueFront(int);
void enqueueReal(int);
void display();
void getFront();
void dequeueFront();
void dequeueReal();

int main()
{
    system("cls");

    enqueueFront(2);
    enqueueFront(5);
    enqueueReal(-1);
    enqueueReal(0);
    enqueueFront(7);
    display();

    dequeueFront();
    dequeueReal();
    dequeueFront();
    display();
    return (0);
}

void enqueueFront(int x)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("deque is full\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[f] = x;
    }
    else
    {
        if (f == 0)
        {
            f = N - 1;
        }
        else
        {
            f--;
        }
        deque[f] = x;
    }
}

void enqueueReal(int x)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("deque is full\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[r] = x;
    }
    else if (r == N - 1)
    {
        r = 0;
        deque[r] = x;
    }
    else
    {
        r++;
        deque[r] = x;
    }
}

// Use (r + 1) % N to correctly handle the wrap-around condition
// void display()
// {
//     int i = f;
//     do
//     {
//         printf("%d\t", deque[i]);
//         i = (i + 1) % N;
//     } while (i != (r + 1) % N);
//     printf("\n");
// }
// TODO: CHECK WHY IT'S STILL DISPLAYING DELETED VALUES.
void display()
{
    int i = f;
    while (i != r)
    {
        printf("%d\t", deque[i]);
        i = (i + 1) % N;
    }
    printf("%d\n", deque[i]);
}

void dequeueFront()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (f == N - 1)
    {
        printf("%d\n", deque[f]);
        f = 0;
    }
    else
    {
        printf("%d\n", deque[f]);
        f++;
    }
}

void dequeueReal()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (r == 0)
    {
        printf("%d\n", deque[r]);
        r = N - 1;
    }
    else
    {
        printf("%d\n", deque[r]);
        r++;
    }
}
