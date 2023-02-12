#include<stdio.h>
#include<math.h>
main()
{
float  x2,x1,y2,y1,D;
printf("The value of 4 coordinates=");
scanf("%f%f%f%f",&x2,&x1,&y2,&y1);
D=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
printf("The value of D is %f",D);
return 0;
}
