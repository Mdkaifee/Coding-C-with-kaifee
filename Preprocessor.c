#include<stdio.h>
#include<stdlib.h>
//macro
#define LIMIT 5
int main ()
{
int a[LIMIT];
int i;
printf("Enter values into the array:");
for(i=0;i<LIMIT;i++){
scanf("%d",&a[i]);
}
printf("Values in the array are: ");
for(i=0;i<LIMIT;i++){
printf("%d\n",a[i]);

}
return 0;

}
