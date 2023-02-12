/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main()
{
    int r,p;
    float a;
    printf("Enter value of a:");
    scanf("%f",&a);
    r=a;
    printf("Total rupees=%d\n",r);
    printf("Total paise=%d",p=(a-r)*100);
    
    return 0;
}
