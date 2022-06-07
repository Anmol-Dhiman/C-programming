#include <stdio.h>
#include <string.h>
int main()
{
  char s1[ ]= "Hello"; 
  char s2[ ]= "World"; 
  int i, j;
  i = strcmp(s1, "Hello");
  j = strcmp(s1, s2);
  printf("%d \n %d\n", i, j);
  return 0;
}