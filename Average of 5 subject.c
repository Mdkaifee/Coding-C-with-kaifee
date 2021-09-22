main()
{
float chem,phy,bio,math,pps,Average;

printf("Enter the marks of 5 subject\n");
scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&pps);
Average=(chem+phy+bio+math+pps)/5;
printf("The Average of 5 subject is %f",Average);
return 0;
}
