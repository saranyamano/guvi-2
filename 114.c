#include<stdio.h>
void main()
{
int n,k,i,p[10],c=0;
scanf("%d,%d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&p[i]);
}
for(i=1;i<=n;i++)
{
if(p[i]%2!=0)
{
c++;
}
if(c==k)
{
printf("%d",p[i]);
}
}
}
