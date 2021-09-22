#include<stdio.h>
int main(){
int i,sum=0,n;

printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter %d elemnets:",n);
for(i=0;i<n;i++)
{
        scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("sum is %d",sum);
}
