#include<stdio.h>
main()
{
int num1,num2,num3,num,num4,sum;
printf("Enter three digit number:");
scanf("%d",&num);
num1=num%10;
num2=num/10;
num3=num2%10;
num4=num2/10;
sum=num1+num4+num3;
printf("The sum of 3 digit no.is:%d",sum);
}
