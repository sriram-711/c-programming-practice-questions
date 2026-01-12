#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[ ]={1,2,3,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int sec=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            sec=max;
            max=arr[i];
        }
        else if(arr[i]>sec && arr[i]!=max)
        {
            sec=arr[i];
        }
    }
    printf("%d",sec);
    return 0;
}
