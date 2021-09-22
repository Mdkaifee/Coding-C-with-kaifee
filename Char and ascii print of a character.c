/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ch;
    printf("Enter character:");
    //ch=getchar();You can use it to accept the char by user.
    scanf("%c",&ch);
    printf("Ascii no.of that char is:%d\n",ch);
    printf("Char entered is:%c",ch);

    return 0;
}
