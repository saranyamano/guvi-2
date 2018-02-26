#include<stdio.h>
void main()
{
int n,sum=0,s,t;
printf("enter the number:\n");
scanf("%d",&n);
while(n!=0)
{
s=n%10;
sum=(sum*10)+s;
n=n/10;
}
while(sum!=0)
{
t=sum%10;
if(t%2!=0)
{
printf("%d\t",t);
}
sum=sum/10;
}
}
