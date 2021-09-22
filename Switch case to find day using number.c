/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int day;
    printf("Enter day number:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        {
            printf("Monday");
            break;
    }
    case 2:
    {
        printf("Tuesday");
        break;
    }
    case 3:
    {
        printf("Wednesday");
        break;
    }
            case 4:
    {
            printf("Thursday");
            break;
    }
        case 5:
    {
        printf("Friday");
        break;
    }
     case 6:
    {
     printf("Saturday");
     break;
    }
    case 7:
    {
        printf("Sunday");
        break;
    }
    default:
    {
        printf("Invalid number entered");
    }
    }
 return 0;
}
