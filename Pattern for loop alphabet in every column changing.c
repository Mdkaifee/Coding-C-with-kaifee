main()
{
int n,i,j;
int ch=64;
printf("Enetr the no.of rows u want to print:");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
    printf("%c ",(ch+j));
}
printf("\n");
}
for(i=n-1;i>=1;i--){
for(j=1;j<=i;j++){
    printf("%c ",(ch+j));
}
printf("\n");
}}
