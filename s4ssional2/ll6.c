#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void push(int x, struct node *top)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void display(struct node *top)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = top;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->link;
    }
    return;
}

int main()
{
    struct node *top = (struct node *)malloc(sizeof(struct node));
    top = 0;
    push(3, top);
    // push(8, top);

    display(top);
    return 0;
}