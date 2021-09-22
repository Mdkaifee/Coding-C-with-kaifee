/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=10,b;
    b= ++a;
    printf("After prefix increment the value of a is %d nd b:%d\n",a,b);
    a=10;
    b= a++;
    printf("After postfix increment the value of a is %d and b is %d",a,b);

    return 0;
}
