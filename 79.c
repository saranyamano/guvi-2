#include<stdio.h>
void main()
{
int n,m,p;
scanf("%d,%d",&n,&m);
p=n*m;
printf("%d",p);
if(n==m)
{
printf("perfect square");
}
else
{
printf("not perfect square");
}
}
