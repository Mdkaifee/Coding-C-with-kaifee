#include<stdio.h>
main()
{
int i,n,sum=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(n%i==0)
{
      sum=sum+i;
}}
 if(n<sum)
printf("No.is abundant");
else
printf("No.is not abundant");
}
