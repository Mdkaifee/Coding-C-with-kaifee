/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct student 
{ 
int roll; 
char c;
};
int main()
{ 
struct student s1; 
s1.roll=101; 
s1.c='A'; 
printf("roll No is %d",s1.roll); 
printf("\nCharacter is %c",s1.c); 
return 0;
}
