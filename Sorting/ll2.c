#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};



    


int main()
{

    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        // head = newnode;

        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue(0,1)");
        scanf("%d", &choice);
    }

    int data;
    printf("enter data");
    scanf("%d", &data);
    //insertatbeginning(head, data);

    struct node *insertnode = (struct node *)malloc(sizeof(struct node));
    insertnode->data = data;
    insertnode->next = head;
    head = insertnode;

    temp = head;

    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}