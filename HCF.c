/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int num1,num2,i,H;
  printf("Enter two numbers:");
  scanf("%d%d",&num1,&num2);
  for(H=num1<num2?num1:num2;H>=1;H--)
if(num1%H==0 && num2%H==0 )
      break;
  printf("HCF is %d",H);
    return 0;
}
