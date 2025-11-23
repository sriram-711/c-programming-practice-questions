#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("its a prime number");
        return 0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("its a peime");
    }
    else{
        printf("its not a prime");
    }
    return 0;
}
