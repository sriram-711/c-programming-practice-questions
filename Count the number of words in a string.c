#include<stdio.h>
int main()
{
    int i;
    char a[100];
    int count;
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            count=count+1;
        }
    }
    printf("count=%d",count+1);
}
