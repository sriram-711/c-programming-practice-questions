#include<stdio.h>
int main()
{
    int n=0,i,j,temp;
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    for(i=0;arr[i]!='\0';i++)
    {
        n=n+1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%c",arr[j]);
    }
    return 0;
}
