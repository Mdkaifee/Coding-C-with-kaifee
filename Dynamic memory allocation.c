#include<stdio.h>
#include<stdlib.h>
int main()
{
double*p;
//allocates memory and assign the address to p
p=(double*)malloc(sizeof(double));
//read value into allocated double variable
printf("Enter value:");
scanf("%lf",p);
//print the value
printf("Entered value :%lf\n",*p);
//release the memory
free(p);
return 0;
}
