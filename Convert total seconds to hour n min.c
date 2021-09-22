/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
main()
{
    int sec,min,hour,total_sec;
    printf("Enter total seconds:");
    scanf("%d",&sec);
    
    hour=sec/3600;
    sec=sec%3600;
    min=sec/60;
    total_sec=sec%60;
    printf("Total hour:%d\n",hour);
    printf("Total minute:%d\n",min);
    printf("Total second=%d",total_sec);
    return 0;
}
