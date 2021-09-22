#include<stdio.h>
main(){
int arr[100],loc,i,n,ele;
//printf("Enter the size of an array:");
//scanf("%d",&n);
printf("Enter the no of element in an array:");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d\t",&arr[i]);
printf("Enter the location where you want to insert that array:\n");
scanf("%d\n",&loc);
printf("Enter the element you want to insert into the array:\n");
scanf("%d",&ele);
for(i=n - 1;i >=loc - 1;i--)
arr[i+1]=arr[i];
arr[loc-1]=ele;
printf("Array after insertion:");
for(i = 0;i<= n;i++)
{
    printf("%d\n",arr[i]);
}
}
