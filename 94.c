#include<stdio.h>
void main()
{
int n,k,i,p[10]={1,6,3,4,5},temp;
printf("Enter n and k:");
scanf("%d,%d",&n,&k);
for(i=1;i<=n;i++)
{
  scanf("%d",&p[i]);
}
for(i=1;i<=n;i++)
{
  if(p[i]==k)
  {
    printf("%d",p[i]);
  }
}
}
