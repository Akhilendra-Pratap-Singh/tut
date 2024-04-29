#include <stdio.h>
#include <stdlib.h>
// circular linked list

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp->next != head)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}
int main()
{
    struct node *head = NULL;
    int choice = 1;
    while (choice)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
        temp->next = head;
        printf("enter your choice");
        scanf("%d", &choice);
    }

    display(head);

    return 0;
}