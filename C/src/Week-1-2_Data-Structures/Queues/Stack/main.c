#include <stdio.h>
#include <stdlib.h>

#define N 5
int s1[N], s2[N];
int top1 = -1, top2 = -1;
int count = 0;

void enqueue(int);
void push1(int);
void dequeue();
int pop1();
void push2(int);
int pop2();

void display();

int main()
{

    system("cls");

    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);

    dequeue();

    display();

    return (0);
}

void enqueue(int x)
{
    push1(x);
    count++;
}

void push1(int data)
{
    if (top1 == N - 1)
    {
        printf("Queue is full");
    }
    else
    {
        top1++;
        s1[top1] = data;
    }
}

void dequeue()
{
    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            int a = pop1();
            push2(a);
        }
        int b = pop2();
        printf("Dequeue value: %d\n", b);
        count--;

        for (int i = 0; i < count; i++)
        {
            int a = pop2();
            push1(a);
        }
    }
}

int pop1()
{
    return s1[top1--];
}

int pop2()
{
    return s2[top2--];
}

void push2(int data)
{
    if (top2 == N - 1)
    {
        printf("Queue is full");
    }
    else
    {
        top2++;
        s2[top2] = data;
    }
}

void display()
{
    if (top1 == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            printf("%d\t", s1[i]);
        }
        printf("\n");
    }
}