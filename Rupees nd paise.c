/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int total_paise,rupees,paise;
    printf("Enter total_paise:");
    scanf("%d",& total_paise);
    rupees=total_paise / 100;
    paise=total_paise % 100;
    printf("rupees= %d\n",rupees);
    printf("paise= %d",paise);
    return 0;
}
