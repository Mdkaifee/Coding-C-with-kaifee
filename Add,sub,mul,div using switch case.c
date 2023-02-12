/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    char op;
    float num1,num2; 
    printf("op(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter num1 and num2:");
    scanf("%f%f",&num1,&num2);
    
    switch(op)
    {
        case '+' :
        {
            printf("%f+%f=%f",num1,num2,num1+num2);
            break;
        }
        case '-' :
        {
            printf("%f-%f=%f",num1,num2,num1-num2);
            break;
        }
        case '*' :
        {
            printf("%f*%f=%f",num1,num2,num1*num2);
            break;
        }
        case '/' :
        {
            printf("%f/%f=%f",num1,num2,num1/num2);
            break;
        }
        default :
        {
        printf("Invalid choice");
    }
}
}