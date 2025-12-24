#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main()
{
    int n,i;
    struct node *newnode,*temp,*head;
    head=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
         newnode->link=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
        
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    newnode=malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newnode;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL");
    return 0;
}
