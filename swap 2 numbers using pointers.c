#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    int *p1 = &a;
    int *p2 = &b;

    // Swap using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("a = %d, b = %d\n", a, b);
    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n", (void*)&b);

    return 0;
}



//////////////////////
#include<stdio.h>
int main()
{
    int temp,a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
    
}
