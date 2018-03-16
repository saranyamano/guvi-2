#include<stdio.h>
void main()
{
char p[50];
int i,n,m;
scanf("%[^\n]s",&p);
for(i=0;p[i]!='\0';i++)
{
if(i==0)
{
n=p[i];
m=n-32;
a[i]=m;
}
if(p[i]==' ')
{
n=p[i+1];
m=n-32;
a[i+1]=m;
}
printf("%c",p[i]);
}
}
