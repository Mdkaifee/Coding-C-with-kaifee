#include<stdio.h>
#include<stdlib.h>

//global declaration
int n=10;

void change(){
    int n;//extern int n will effect the global change
    n=20;
}

int main(){

printf("Before change function,value of n is :%d\n",n);

change();

printf("After change function,value of n is :%d",n);

return 0;
}
