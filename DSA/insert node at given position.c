#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main()
{
    int n,i,pos,count=0;
    struct node *newnode,*temp,*head;
    head=NULL;

    scanf("%d",&n);

    // Create linked list
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->link = NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
    }

    // Count nodes
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }

    scanf("%d",&pos);

    if(pos < 1 || pos > count+1)
    {
        printf("Invalid position");
        return 0;
    }

    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);

    // Insert at beginning
    if(pos == 1)
    {
        newnode->link = head;
        head = newnode;
    }
    else
    {
        temp=head;
        i = 1;
        while(i < pos-1)
        {
            temp=temp->link;
            i++;
        }
        newnode->link=temp->link;
        temp->link=newnode;
    }

    // Print list
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL");

    return 0;
}
