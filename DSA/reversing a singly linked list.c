#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

int main()
{
    int n,i;
    struct node *head=NULL, *temp, *prev, *next, *curr, *newnode;

    scanf("%d",&n);

    // Create linked list
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->link = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
    }

    // Reverse linked list
    prev = NULL;
    curr = head;

    while(curr != NULL)
    {
        next = curr->link;   // save next
        curr->link = prev;   // reverse link
        prev = curr;         // move prev
        curr = next;         // move curr
    }

    head = prev;

    // Print reversed list
    temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("NULL");

    return 0;
}
