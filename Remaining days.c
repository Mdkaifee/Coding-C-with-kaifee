/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int days,month,remaining;
    printf("Enter the no.of days:");
    scanf("%d",&days);
    month=days/30;
    printf("month:%d\n",month);
    remaining=days%30;
    printf("Remaining days=%d",remaining);

    //return 0;
}
