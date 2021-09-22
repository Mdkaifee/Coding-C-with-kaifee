/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,num;
    printf("Enter number u want to multiply:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d=%d\n",num,i,num*i);
    }
    return 0;
}
