#include<stdio.h>
int main()
{
int i,j,a[50],min,t;
printf("enter the numbers\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<10;i++)
{
min=a[0];
}
printf("%d",min);
return 0;
}
