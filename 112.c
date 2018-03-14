#include<stdio.h>
void main()
{
int n,k,i,p[10];
scanf("%d,%d",&n,&k);
for(i=0;i<=n;i++)
{
scanf("%d",&p[i]);
}
for(i=0;i<=n;i++)
{
if(p[i]==k)
{
printf("YES");
}
}
}
