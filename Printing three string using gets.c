/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main()
{
    char s[3][10];
    int i;
    printf("Enter three strings:\n");
    for(i=0;i<=2;i++)
    gets(&s[i][0]);//gets(s[i])
    for(i=0;i<=2;i++)
    printf("Three strings are:%s\n",s[i]);
}
