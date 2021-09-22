/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x,y;
   printf("Enter the digit u want to shift:");
   scanf("%d",&x);
   x<<=2;
   y=x;
   printf("After left shift value is: %d",y);
   return 0;
}
