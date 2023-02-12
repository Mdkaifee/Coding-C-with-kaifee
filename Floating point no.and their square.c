#include<stdio.h>

main()
{
    int count,n;
    float x,y;
    printf("Enter the values of x and n:");
    scanf("%f%d",&x,&n);
    y=1.0;
    count=1;
    while(count<=n)
    {
    y=y*x;
    count++;
    }
    printf("\nx=%f;n=%d;x x^n=%f\n",x,n,y);
}