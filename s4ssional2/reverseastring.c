#include <stdio.h>
#include <string.h>
#define N 100
int stack[N];
int top = -1;

void push(int data)
{
    // int x;
    // printf("Enter the number that you want to enter");
    // scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top] = data;
    }
    return;
}

void pop()
{

    int item;
    if (top == -1)
    {
        printf("stack underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%c", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%c", stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%c\n", stack[i]);
    }
}

void reverse(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        int item = str[i];
        push(item);
    }
}

int main()
{
    char str[] = "Akhilendra";

    reverse(str);
    for (int i = 0; i < strlen(str); i++)
    {
        pop();
    }

    return 0;
}