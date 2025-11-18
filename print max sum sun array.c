#include<stdio.h>
int main()
{
    int n,i,temp=0,start=0,end=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int cur_arr=0,max_arr=arr[0];
    for(i=0;i<n;i++)
    {
        cur_arr+=arr[i];
        if(cur_arr>max_arr)
        {
            max_arr=cur_arr;
            start=temp;
            end=i;
        }
        if(cur_arr<0)
        {
            cur_arr=0;
            temp=i+1;
        }
    }
    for(i=start;i<=end;i++)
    {
        printf("%d",arr[i]);
        count=count+arr[i];
    }
    printf("%d",count);
    return 0;
}
