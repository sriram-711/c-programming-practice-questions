#include<stdio.h>
int main()
{
    int i,len=0;
    char temp,a[100];
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        len=len+1;
    }
    printf("%d",len-1);
    for(i=0;i<len/2;i++)
    {
        temp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=temp;
    }
    for(i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
