/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int small(int x,int y){
    if(x<y) 
    return x;
    else
    return y;}
    int main(){
        int a,b,c;
        printf("Enter three numbers:");
        scanf("%d%d%d",&a,&b,&c);
        int z=small(a,small(b,c));
    printf("result is %d\n",z);

    return 0;
}
