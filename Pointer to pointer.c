#include<stdio.h>
void main(){
    int var;
    int *ptr1;
    int **ptr2;
    ptr1=&var;
    ptr2=&ptr1;
    printf("Enter any number:");
    scanf("%d",&var);
printf("\nAddress of var is %x",ptr1);
printf("\nAddress of first pointer is %x",ptr2);
printf("\nValue pointed by first pointer is %d",*ptr1);
printf("\nValue pointed by second pointer's pointer is %d",**ptr2);
}
