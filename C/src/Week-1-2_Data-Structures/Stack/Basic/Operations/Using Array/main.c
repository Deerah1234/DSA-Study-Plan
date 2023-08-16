#include <stdio.h>
// #include "./utils.c"
#define N 5

int stack[N];
int top = -1;

void push(int x);
void pop();
void display();
void peek();


int main()
{
    push(5);
    push(6);
    push(7);
    // peek();
    // display();
    pop();
    peek();
    display();
}

void push(int x)
{
    if ( top == (N-1))
        printf("Stack is full");
    else
    {
        top++;
        stack[top] = x;
    }
}

void display()
{
    if ( top == -1 )
        printf("Stack is empty");
    else
    {
        for (int i = top; i >= 0; i--)
            printf("[%d] - %d\n", i, stack[i]);
    }
}

void pop()
{
    if ( top == -1)
        printf("Stack is empty");
    else
        top--;
}

void peek()
{
    if ( top == -1)
        printf("Stack is empty");
    else
        printf("\nTop: [%d] - %d\n", top, stack[top]);
}