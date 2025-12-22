#include<stdio.h>
#define max 100
int stack[max];
int top=-1,n;
int push(int a)
{
    if(top>=n-1)
    {
        printf("full");
    }
    else{
        top++;
        stack[top]=a;
        printf("%d",stack[top]);
    }
}
int pop()
{
    if(top==-1)
    {
        printf("empty");
    }
    else{
        printf("%d",stack[top]);
        top--;
    }
}
int main()
{
    scanf("%d",&n);
    int i;
    int stack[n];
    for(i=1;i<=n;i++)
    {
        push(i);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    pop();
    }
    
    return 0;
}
