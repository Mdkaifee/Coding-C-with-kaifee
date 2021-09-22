#include<stdio.h>

int main()
{
    int i=13,j=5;
    j=++i +7+i++ +i;
    printf("%d",j);
    return 0;
}