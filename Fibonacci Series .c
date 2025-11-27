#include<stdio.h>
int main()
{
int n,a=0,b=1,c=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if(i==0)
    {
        c=0;
    }
    else if(i==1)
    {
        c=1;
    }
    else{
        c=a+b;
    }
        a=b;
        b=c;
    printf("%d",c);
}
return 0;
}
///////////////////////////////////////
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,sum=0;
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",a);
        return 0;
    }
    else if(n==1)
    {
        printf("%d",a);
        return 0;
    }
    else{
        printf("%d",a);
        for(i=0;i<n;i++)
        {
            sum=a+b;
            b=a;
            a=sum;
            printf(" %d",sum);
        }
    }
    return 0;
}
