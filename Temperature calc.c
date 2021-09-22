#include<stdio.h>
main()
{
float temp,F,K;
    printf("Enter the value of temp in Celsius:");
    scanf("%f",&temp);
    F=(temp*9/5)+32;
    K=temp+273.15;
    printf("The value of temp in Fahrenheit is %f\n",F);
    printf("The value of temp in Kelvin is %f",K);
    }
