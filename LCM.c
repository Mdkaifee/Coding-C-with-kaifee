/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int num1,num2,i,L;
  printf("Enter two numbers:");
  scanf("%d%d",&num1,&num2);
for(L=1;L<=num1*num2;L++)//can apply for(L=num1>num2?num1:num2;L<=num1*num2;L=L+(num1>num2?num1:num2))
  if(L%num1==0 && L%num2==0 )
      break;
  printf("LCM is %d",L);
    return 0;
}
