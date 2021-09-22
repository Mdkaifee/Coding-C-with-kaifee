#include <stdio.h>
main()
{
    int x=5;
    printf("%d\n",x);
    printf("%d",&x);//%u is better to use
    printf("%d",*&x);
    return 0;
}
