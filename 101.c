#include<stdio.h>
int main()
{
    char str[10];
    int n,t,i,c=0;
    printf("enter the string:");
    scanf("%s",&str);
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;str[i]!='\0';i++)
    {
        c++;
    }
    t=c-n;
    for(i=t;i<=c;i++)
    {
        printf("%c\t",str[i]);
    }
    return 0;
}
