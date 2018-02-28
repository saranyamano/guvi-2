#include<stdio.h>
void main()
{
int n1,n2,x,y,temp,lcm;
scanf("%d,%d",&n1,&n2);
x=n1;
y=n2;
while(y!=0)
{
temp=y;
y=x%y;
x=temp;
}
lcm=(n1*n2)/x;
printf("%d",lcm);
}
