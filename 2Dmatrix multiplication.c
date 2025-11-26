#include<stdio.h>
int main()
{
    int n,i,j,k,m;
    scanf("%d %d",&n,&m);
    int arr[n][m],arr1[n][m],mul[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            mul[i][j]=0;
            for(k=0;k<m;k++)
            {
                mul[i][j]+=arr[i][k]*arr1[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
    
    
}
