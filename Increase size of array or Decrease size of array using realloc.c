#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,new,i,*arr;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    scanf("%d",&new);
    printf("\n");
    arr=(int*)realloc(arr,new*sizeof(int));
    for(i=n;i<new;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<new;i++)
    {
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}
