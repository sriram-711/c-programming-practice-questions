#include<stdio.h>
int main()
{
    int n=0,i,j,temp,n1=0,anagam=0;
    char arr[100];
    char brr[100];
    fgets(arr,sizeof(arr),stdin);
    fgets(brr,sizeof(brr),stdin);
    for(i=0;arr[i]!='\0';i++)
    {
        n=n+1;
    }
    for(i=0;brr[i]!='\0';i++)
    {
        n1=n1+1;
    }
    if(n!=n1)
    {
        printf("not a Anagrams");
        return 0;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(brr[i]<brr[j])
            {
                temp=brr[i];
                brr[i]=brr[j];
                brr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=brr[i])
        {
            anagam=anagam+1;
        }
        else{
              anagam=0;
        }
    }
    if(anagam==0)
    {
        printf("its a Anagrams");
    }
    else{
        printf("its not a Anagrams");
    }
    
    return 0;
}
