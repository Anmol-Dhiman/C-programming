#include<stdio.h>

int main(int argc, char const *argv[])
{
      int x;
      printf("enter the five digit no:");
      scanf("%d", &x);
      printf("%d\t", x/10000);
      int x1=x-((x/10000)*10000);
      printf("%d\t", x1/1000);
      int x2= x1-((x1/1000)*1000);
      printf("%d\t", x2/100);
      int x3=x2-((x2/100)*100);
      printf("%d\t", x3/10);
      int x4=x3-((x3/10)*10);
      printf("%d\t", x4 );
       return 0;
}


