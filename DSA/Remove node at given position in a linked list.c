#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main()
{
    int n,i,pos;
    struct node*newnode,*head=NULL,*temp,*prv;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
    }
    temp=head;
    scanf("%d",&pos);
    prv=NULL;
    if(pos==1)
    {
        head = head->link;
    }
    else{
    for(i=1;i<pos;i++)
    {
        prv=temp;
        temp=temp->link;
    }
    prv->link=temp->link;
    }
     temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL");
    return 0;
}
