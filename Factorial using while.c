/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
    fact=fact*i;
        i=i+1;
    }
    //i=i+1;
    printf("Factorial of %d is %d",n,fact);
    return 0;
}