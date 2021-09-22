main()
{
int n,i,j;
int ch=1;
printf("Enetr the no.of rows u want to print:");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
    printf("%02d ",(ch++));//%02 is used for adding 0 before single digit or u can use only space by adding only 2 in place of 02
}
printf("\n");
}
for(i=n-1;i>=1;i--){
for(j=1;j<=i;j++){
    printf("%d ",(ch++));
}
printf("\n");
}}
