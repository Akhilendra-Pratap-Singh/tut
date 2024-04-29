#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct node *next;
};

struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

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

    // struct Node *fourth;
    // fourth = (struct Node *)(malloc(sizeof(struct Node)));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = NULL;

    head = insertatindex(head, 56, 1);
    linkedlisttraversal(head);

    return 0;
}