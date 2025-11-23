#include<stdio.h>
int main()
{
int l=0,i;
char a[100];
fgets(a,sizeof(a),stdin);
for(i=0;a[i]!='\0';i++)
{
    l=l+1;
}
for(i=0;i<l;i++)
{
    if(a[i] >= 'A' && a[i] <= 'Z')
    a[i] = a[i] + 32;
}
for(i=0;i<l;i++)
{
    printf("%c",a[i]);
}
return 0;
}
