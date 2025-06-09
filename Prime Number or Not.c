#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("it not a prime number");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("its a prime number");
    }
    else{
        printf("its not a prime number");
    }
    return 0;
}
