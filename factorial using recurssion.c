#include <stdio.h>
int fact(int);
void main(){
    int num, factorial;
    printf("Enter any number:");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial is %d\n",factorial);
    }
    int fact(int n){
        if(n==1)
            {//base case
        return 1;
        }
        else{
        return n*fact(n-1);
        }
    }
