#include <stdio.h>
#define N 5

int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter the number that you want to enter");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top] = x;
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
        printf("%d", item);
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
        printf("%d", stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{

    int ch;
    // clrscr();
    do
    {
        printf("Enter choice: 1:push 2:pop 3: peek 4;display");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        }

    } while (ch != 0);

    return 0;
}
