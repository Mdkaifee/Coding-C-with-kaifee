#include <stdio.h>
main()
{
    int x=5,*j;
    j=&x;
    printf("%d %d\n",x,j);
    printf("%d %u",*j,&x);//%u is better to use
    printf("%d",*&j);
    return 0;
}
