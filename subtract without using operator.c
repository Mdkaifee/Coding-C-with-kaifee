/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,sub;
    printf("Enter two no.=");
    scanf("%d%d",&x,&y);
    sub=x + ~y + 1;
printf("Sub of %d and %d is %d",x,y,sub);
    return 0;
}
