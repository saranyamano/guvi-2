#include<stdio.h>
void main()
{
int i,n,k,o,d;
printf("Enter the number of input:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the ninja's in kabali's clan:");
scanf("%d",&k);
printf("Enter the ninja's in opponent's clan:");
scanf("%d",&o);
printf("\n:");
d=k-o;
printf("Difference:%d\n",d);
}
}
