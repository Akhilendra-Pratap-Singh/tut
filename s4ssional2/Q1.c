#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void push(struct node * &head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;

    if(head!=NULL){
        newnode->next = head;
    }
    else{
        newnode = head;
    }
}

void print(struct node* &head){
    
}

int main()
{

    struct node *head = NULL;
    for (int i = 1; i <= 10; i++)
    {
        int n;
        printf("Enter the data thaat you want to insert ");
        scanf("%d", &n);
        push(head, n);
    }
    print(head);

    return 0;
}