#include<stdio.h>
int main()
{
    int money=1000,amount,value=0;
    printf("enter 1 for check blance");
    printf("enter 2 for withdraw");
    printf("enter 3 for deposite");
    scanf("%d",&amount);
    if(amount==1)
    {
        printf("%d",money);
    }
    else if(amount==2)
    {
        printf("enter value");
        scanf("%d",&value);
        if(money>=value)
        {
        money=money-value;
        printf("%d",money);
        }
        else{
            printf("less money");
        }
    }
    else if(amount==3)
    {
        printf("enter value");
        scanf("%d",&value);
        if(value>0)
        {
            money+=value;
            printf("%d",money);
        }
    }
    return 0;
}
