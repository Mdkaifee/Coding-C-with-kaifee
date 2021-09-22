#include<stdio.h>
int main(){
int i,n;
printf("Enter the size of an array:");
scanf("%d",&n);
int arr[n];
printf("Enter the %d element:",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);}
printf("Even numbers in the array:-");
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
printf("%d \t",arr[i]);
}
}
printf("\n odd numbers in the array:-");
for(i=0;i<n;i++){
if(arr[i]%2!=0)
{
    printf("%d \t",arr[i]);
}
}}
