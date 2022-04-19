#include <stdio.h>
#define int short
int main()
{
  int a;
  void *f;
  f = &a;
  *(int *)f = 33;
  printf("%d", sizeof(*(int *)f));
  return 0;
}



