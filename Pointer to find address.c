#include<stdio.h>
void main(){
    int var;
    int *ptr;
    ptr=&var;
    printf("Enter any number:");
    scanf("%d",&var);
    printf("\nAddress:%x",ptr);
    printf("\nValue: %d",var);
}
