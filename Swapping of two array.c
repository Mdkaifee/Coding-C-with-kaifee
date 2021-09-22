#include<stdio.h>
main()
{
int a[5],b[5],c[5],i;
printf("Enter first array :");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("Enter 2nd array :");
for(i=0;i<5;i++)
scanf("%d",&b[i]);
printf("Values of first array before swapping:\t");
for(i=0;i<5;i++){
printf("%d\t",a[i]);
}
printf("\nValues of 2nd array before swapping:\t");
for(i=0;i<5;i++){
printf("%d\t",b[i]);
}
for(i=0;i<5;i++){
c[i]=a[i];
a[i]=b[i];
b[i]=c[i];}
printf("\nArrays after swapping first array:\n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
printf("\nArrays after swapping 2nd array:\n");
for(i=0;i<5;i++)
{
printf("%d\t",b[i]);
}}
