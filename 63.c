#include<stdio.h>
int main(0
{
char a[10];
int i,count=0;
printf("enter the string:\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("Number of words in string are %d",count+1);
return 0;
}
