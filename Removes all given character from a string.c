#include<stdio.h>
int main()
{
    int i,len=0;
    char a[100],c;
    fgets(a, sizeof(a), stdin);
    for(i=0;a[i]!='\0';i++)
    {
        len=len+1;
    }
    len--;
    printf("%d",len);
    scanf("%c",&c);
    for(i=0;i<len;i++)
    {
        if(c==a[i])
        {
            a[i]='\0';
        }else{
        printf("%c",a[i]);
        }
        
    }

    return 0;
}
