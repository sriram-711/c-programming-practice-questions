#include<stdio.h>
int main()
{
    int n,i,j,rem;
    int a[100];
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        rem=n%2;
        a[i]=rem;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}
