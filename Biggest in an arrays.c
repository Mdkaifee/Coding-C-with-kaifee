/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main ()
{
double arr[5];
  int i;
  double big;
  printf ("Enter 5 element:");
  for (i = 0; i < 5; i++)
    {
      scanf ("%lf",&arr[i]);
    }
  big = arr[0];
  for (i = 1; i < 5; i++){
    if (arr[i] > big)
      {
	big = arr[i];
      }}
  printf ("Biggest value is %lf\n",big);
}
