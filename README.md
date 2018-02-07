#include<stdio.h>
int main()
{
int n,i,t,t1=0,t2=1;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",t1);
t=t1+t2;
t1=t2;
t2=t;
}
return 0;
}
