#include<stdio.h>
int main()
{
    int i,len=0,j,k;
    char a[100];
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        len=len+1;
    }
    len--;
    for(j=0;j<len;j++)
    {
        for(k=j+1;k<len;k++)
        {
            if(a[j]==a[k])
            {
               printf("Repeat=%c\n",a[k]);
               return 0;
            }
        }
    }
    return 0;
}
