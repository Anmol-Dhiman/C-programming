#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
  printf("enter the no:");
  scanf("%d", &a);
  printf("a\ta+2\ta+4\ta+6");
  while (a<30)
  {
      printf("%d\t", a);
      a+=2;
      a+=4;
      a+=6;
  }
   return 0;
}
