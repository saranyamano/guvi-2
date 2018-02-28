#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i,j,len,c=0;
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len-1;i++)
{
for(j=i+1;j<len;j++)
{
if(a[i]==a[j])
{
c++;
}
}
}
if(c>=1)
{
printf("no");
}
else
{
printf("yes");
}
}
