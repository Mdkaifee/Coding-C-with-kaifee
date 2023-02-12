/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int num,a;
    printf("Enter number:");
    scanf("%d",&num);
    a=sqrt(num);
    if(num-a*a==0)
    printf("number is perfect square");
    else
    printf("It is not perfect square");

    return 0;
}
