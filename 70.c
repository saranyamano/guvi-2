#include<stdio.h>
int main()
{
int n,i,p=1;
scanf("%d",&n);
if(n<10000000)
{
for(i=0;i<=n;i++)
{
p=p*2;
if(p==n)
{
printf("%d",n*2);
}
}
}
return 0;
}
