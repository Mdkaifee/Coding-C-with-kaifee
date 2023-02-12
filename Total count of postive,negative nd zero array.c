#include<stdio.h>
main()
{
int a[10];
int i,n,positive=0,negative=0,zero=0;
printf("Enter the no.of elements u want to enter:");
scanf("%d",&n);
printf("Enter the elements you want to enter:",n);
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
if(a[i]>0)
{
positive++;
}
else if(a[i]<0)
{
negative++;
}
else
{
zero++;
}}
printf("\nPositive Element is=%d:",positive);
printf("\nNegative Element is=%d:",negative);
printf("\nZero Element is=%d:",zero);
}
