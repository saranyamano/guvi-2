#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int a,count=0;
printf("Enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
count++;
}
}
if(count!=0)
{
printf("string contains vowels");
}
else
{
printf("string does not contains vowels");
}
}
