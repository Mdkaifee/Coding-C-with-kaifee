/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float a,b,c,root1,root2,discriminant;
   printf("Enter the coefficient of quadratic equation:");
   scanf("%f%f%f",&a,&b,&c);
   discriminant=b*b-4*a*c;
   if(discriminant>=0)
   {
       root1= (-b+sqrt(discriminant))/2*a;
       root2= (-b-sqrt(discriminant))/2*a;
       printf("root1=%f,root2=%f",root1,root2);
   }
   else
   {
       printf("roots are imaginary");
   }
    return 0;
}