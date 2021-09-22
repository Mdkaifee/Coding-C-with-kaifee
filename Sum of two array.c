#include<stdio.h>
main()
{
int i,a[100],b[100],c[100],n,m;
printf("Enter the size of 1st array:");
scanf("%d",&n);
int arr[n];
printf("Enter %d element of 1st array:\t",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int array[m];
printf("Enter %d element of 2nd array:\t",n);
for(i=0;i<n-1;i++){
scanf("%d\t",&b[i]);
}
for(i=0;i<n;i++)
{
    c[i]=a[i]+b[i];
}
printf("Sum of Third array\t");
for(i=0;i<n;i++)
{
    printf("%d\t",c[i]);
}}
