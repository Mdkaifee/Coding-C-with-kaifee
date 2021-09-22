#include<stdio.h>
main(){
int a[10][10],b[10][10],c[10][10];
int i,j,m,n;
printf("Enter the dimensions n and n");
scanf("%d%d",&n,&n);
printf("Enter the values for first matrix");
for(i=0;i<m;i++)
for(j=0;j<n;j++){
        printf("Enter value for rows : %d col : %d  ", i, j);
scanf("%d",&a[i][j]);
}
printf("\nEnter the values for 2nd matrix");
for(i=0;i<2;i++)
for(j=0;j<3;j++){
        printf("Enter value for rows : %d col : %d  ", i, j);
scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
for(j=0;j<n;j++){
c[i][j]=a[i][j]+b[i][j];
}}
printf("added result is\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++){
printf("%d",c[i][j]);
printf("\n");
}
