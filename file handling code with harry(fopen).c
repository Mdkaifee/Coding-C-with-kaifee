#include <stdio.h>

int main ()
{
  FILE *ptr=NULL;
  char string[34];
  ptr=fopen("Untitled1","r");
  fscanf(ptr,"%s",string);
  printf("The content of this file has %s\n",string);
  return 0;
}
