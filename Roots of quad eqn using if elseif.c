/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float a,b,c,root1,root2,discriminant,realpart,imgpart;
   printf("Enter the coefficient of quadratic equation:");
   scanf("%f%f%f",&a,&b,&c);
   discriminant=b*b-4*a*c;
   if(discriminant>0)
   {
       root1= (-b+sqrt(discriminant))/2*a;
       root2= (-b-sqrt(discriminant))/2*a;
       printf("root1=%f,root2=%f",root1,root2);
   }
   else if(discriminant==0){
       root1=root2=-b/2*a;
       printf("root1=root2=%f:",root1);
       
   }
   else{
       realpart=b/2*a;
       imgpart=sqrt(-discriminant)/(2*a);
       printf("root1=%f+%f and root2=%f-%f",realpart,imgpart);
   }
   return 0;
}

