#include <stdio.h>
#include <stdlib.h>

#define N 5
int deque[N];
int f = -1, r = -1;

void enqueueFront(int);
void enqueueReal(int);
void display();

int main()
{
    system("cls");

    enqueueFront(2);
    enqueueFront(5);
    enqueueReal(-1);
    enqueueReal(0);
    enqueueFront(7);

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

void display()
{
    int i = f;
    do
    {
        printf("%d\t", deque[i]);
        i = (i + 1) % N; 
    } while (i != (r + 1) % N); // Use (r + 1) % N to correctly handle the wrap-around condition
    printf("\n");
}
