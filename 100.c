#include<stdio.h>
void main()
{
int n,temp,mul=1;
scanf("%d",&n);
while(n!=0)
{
temp=n%10;
mul=mul*temp;
n=n/10;
}
printf("%d",mul);
}
