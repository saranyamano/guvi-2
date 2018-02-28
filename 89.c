#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i,j,temp,len;
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len-1;i++)
{
for(j=i+1;j<len;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<len;i++)
{
printf("%c",a[i]);
}
}
