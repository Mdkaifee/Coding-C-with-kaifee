#include<Stdio.h>
int main()
{
long a=10;
long *p=&a;
long **q=&p;
printf("a is %ld\n",a);
printf("p is %ld\n",*p);
printf("q is %ld\n",**q);

}
