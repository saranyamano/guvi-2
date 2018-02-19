#include<stdio.h>
int main()
{
int n,l,r;
printf("enter the number:\n");
scanf("%d",&n);
printf("enter the ranges:\n");
scanf("%d,%d",&l,&r);
if((n>=l)&&(n<=r))
{
printf("yes");
}
else
{
printf("no");
}
}
