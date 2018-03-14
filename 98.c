#include<stdio.h>
void main()
{
int n,i,p[10];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&p[i]);
}
for(i=1;i<=n;i++)
{
if(p[i]>p[i+1])
{
printf("%d",--p[i+1]);
}
break;
}
}
