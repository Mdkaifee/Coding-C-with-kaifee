#include<stdio.h>
void change(int b){//b=*p
b=b+5;//replace b with *p
}
int main(){
int a=5;
change(a);//a with &a
printf("a is %d\n",a);//then a will be 10 instead of 5
return 0;
}
