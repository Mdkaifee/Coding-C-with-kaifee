/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fun(void)
{
    auto int a=0;
    static int b=0;
    
    printf("a = %d, b = %d\n",a,b);
    
    a++;
    b++;
}

int main()
{
    int loop;
    
    //calling function 10 times
    for(loop=0; loop<5; loop++)
        fun();
	
	return 0;
}

