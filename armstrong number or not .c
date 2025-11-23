#include<stdio.h>
int main()
{
    int n,d=0,rem;
    scanf("%d",&n);
    int o=n;
    while(n>0)
    {
        rem=n%10;
        d+=rem*rem*rem;
        n=n/10;
    }
    if(o==d)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
