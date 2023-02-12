#include<stdio.h>
main()
{
int i,a[100],b[100],c[100],n;
printf("Enter the size of 1st array:");
scanf("%d\t",&n);
int arr[n];
printf("Enter %d element of 1st array:\t",n);
for(i=n;i<=0;i--){
scanf("%d",&a[i]);
}
printf("Enter %d element of 2nd array:\t",n);
for(i=n;i<=0;i--){
scanf("%d\t",&b[i]);
}
for(i=n;i<=0;i--)
{
    c[i]=a[i]+b[i];
}
printf("Sum of Third array\t");
for(i=0;i<n;i++)
{
    printf("%d\t",c[i]);
}}
