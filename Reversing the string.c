#include<stdio.h>
int main()
{
    char a[100];
    int n=0,j,i;
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    printf("%d",n-1);
    for(j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
    return 0;
}

