#include<stdio.h>
void main()
{
int n,k,i,j,p[10]={1,6,3,4,5},temp;
printf("Enter n and k:");
scanf("%d,%d",&n,&k);
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(p[i]>p[j])
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
}
}
printf("%d",p[k-1]);
}
