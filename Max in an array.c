#include<stdio.h>
int main()
{
int i,n,max=0;
printf("Enter the size of an array:-");
scanf("%d",&n);
int arr[n];
printf("Enter %d element:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(arr[i]>max)
{
max=arr[i];
}}
printf("Max num is %d ",max);
}
