#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    int maxSum = arr[0];
    int start = 0, end = 0;
    int currentStart = 0;

    for(i = 0; i < n; i++)
    {
        if(sum <= 0) {
            sum = arr[i];
            currentStart = i;   // new subarray starts here
        } else {
            sum += arr[i];
        }

        if(sum > maxSum) {
            maxSum = sum;
            start = currentStart;
            end = i;
        }
    }

    printf("Max Subarray Sum = %d\n", maxSum);

    printf("Subarray: ");
    for(i = start; i <= end; i++)
        printf("%d ", arr[i]);

    return 0;
}
