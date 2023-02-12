#include<stdio.h>
#include<math.h>
main()
{
float A,S,a,b,c;
printf("Enter the three sides of triangle=");
scanf("%f%f%f",&a,&b,&c);
S=(a+b+c)/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
printf("Area of the triangle is=%f",A);
return 0;

}
