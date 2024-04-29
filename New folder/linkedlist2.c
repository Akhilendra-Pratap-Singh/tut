#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    // Allocate memory for linked list in heap
    struct Node *head;
    head = (struct node *)malloc(sizeof(struct Node));
    struct Node *second;
    second = (struct node *)malloc(sizeof(struct Node));

    struct Node *third;
    third = (struct node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = NULL;

    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = 56;
    ptr->next = NULL;
    third->next = ptr;

    linkedlisttraversal(head);

    return 0;
}