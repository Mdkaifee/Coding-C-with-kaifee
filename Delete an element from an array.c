#include<stdio.h>
main()
{
int array[100],position,i,n;
printf("No.of element u want to enter :");
scanf("%d",&n);
printf("Enter %d element\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("Enter the location u want to delete\n");
scanf("%d",&position);
if(position>=n+1)
printf("Deletion is not possible");
else
{
for(i=position-1;i<n-1;i++)
    array[i]=array[i+1];
printf("Resultant array :\n");
for(i=0;i<n-1;i++)
printf("%d\n",array[i]);
}
















}
