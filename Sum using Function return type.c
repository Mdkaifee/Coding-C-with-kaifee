#include <stdio.h>
int main()
{
int a,b,c;
a=9;
b=87;
c=sum(a,b);
printf("The sum is %d \n",c);
return 0;
}
int sum(int a,int b)
{
return a+b;
}
