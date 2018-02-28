#include<stdio.h>
void main()
{
int n1,n2,x,y,temp,lcm;
scanf("%d,%d",&n1,&n2);
x=n1;
y=n2;
while(x!=0)
{
temp=x;
x=x%y;
y=temp;
}
lcm=(n1*n2)/y;
printf("%d",lcm);
}
