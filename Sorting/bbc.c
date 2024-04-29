#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **top, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Memory error\n");
        return;
    }
    newNode->data = data;
    newNode->next = (*top);
    (*top) = newNode;
}

int isEmpty(struct Node *top)
{
    return !top;
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node *temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

void sortStack(struct Node **top)
{
    struct Node *curr = *top;
    struct Node *minNode;
    int minData;

    while (curr != NULL)
    {
        minNode = curr;
        minData = curr->data;
        struct Node *temp = curr->next;

        while (temp != NULL)
        {
            if (temp->data < minData)
            {
                minData = temp->data;
                minNode = temp;
            }
            temp = temp->next;
        }

        if (minNode != curr)
        {
            minNode->data = curr->data;
            curr->data = minData;
        }
        curr = curr->next;
    }
}

void printStack(struct Node *top)
{
    while (top != NULL)
    {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main()
{
    struct Node *top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 5);
    push(&top, 15);

    printf("Original Stack: ");
    printStack(top);

    sortStack(&top);

    printf("Sorted Stack: ");
    printStack(top);

    return 0;
}