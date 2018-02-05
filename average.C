#include<stdio.h>
int main()
{
int i,n,a,sum=0,c;
printf("\n enter the number of values");
scanf("%d",n);
for(i=1;i<=n;i++)
{
printf("\n enter the %d value:",i);
scanf(%d",&a);
sum=sum+a;
}
c=sum/n;
printf("\n output :",c);
return 0;
}
