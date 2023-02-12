/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=-3,j=2,k=0,m;
    m=++i && ++j  || ++k  ;
    printf("%d,%d,%d,%d\n",i,j,k,m);

    return 0;
}
