#include<stdio.h>
void main()
{
char a[50],b[50];
printf("enter the string\n");
scanf("%s",&a);
strcpy(b,a);
strrev(a);
if(strcmp(a,b)==0)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
