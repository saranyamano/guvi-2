#include<stdio.h>
int main()
{
char a[10];
char n;
int b;
printf("enter the string:\n");
scanf("%s",&a);
b=strlen(a);
n='*';
a[b/2]=n;
if(b%2==0)
a[(b-1)/2]=n;
printf("%s",a);
}
