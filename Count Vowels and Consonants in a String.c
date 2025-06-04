#include<stdio.h>
int main()
{
    char arr[100],A,E,I,O,U,a,e,i,o,u;
    int vowels=0;
    int j,Consonants=0;
    fgets(arr,sizeof(arr),stdin);
    for(j=0;arr[j]!='\0';j++)
    {
        if(arr[j]=='A'||arr[j]=='a'||arr[j]=='E'||arr[j]=='e'||arr[j]=='I'||arr[j]=='i'||arr[j]=='O'||arr[j]=='o'||arr[j]=='U'||arr[j]=='u')
        {
            printf("%c",arr[j]);
            vowels=vowels+1;
        }
        else{
            Consonants=Consonants+1;
        }
    }
    printf("\n");
    printf("Consonants=%d\n",Consonants-1);
    printf("vowels=%d\n",vowels);
    return 0;
}
