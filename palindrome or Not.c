#include<stdio.h>
int main()
{
    int i,length=0,palindrome;
    char temp,a[100];
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        length=length+1;
    }
    printf("%d",length-1);
    for(i=0;i<length/2;i++)
    {
        temp=a[i];
        a[i]=a[length-i-1];
        a[length-i-1]=temp;
    }
    for(i=0;i<length/2;i++)
    {
        if(a[i]==a[length-i])
        {
            palindrome=0;
        }
        else
        {
            palindrome=1;
        }
    }
    if(palindrome==0)
    {
        printf("it a palindrome");
    }
    else
    {
        printf("it not a palindrome");
    }
    return 0;
}
