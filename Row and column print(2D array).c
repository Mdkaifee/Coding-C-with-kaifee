#include<stdio.h>
main(){
int a[3][4];
int i,j;
for(i=0;i<2;i++)
for(j=0;j<3;j++){
        printf("Enter value for rows : %d col : %d  ", i, j);
scanf("%d",&a[i][j]);
}

printf("Values are:\n");
for(i=0;i<2;i++){
printf("\n");}
for(j=0;j<3;j++)
printf("\n");
printf("%d",a[i][j]);
}
