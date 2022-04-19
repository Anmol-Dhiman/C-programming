#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the no:");
    scanf("%d", &a);
    int b;
    b=a;
    for (int  i = 1; i <=a; i++)
    {
      for (int j = 1; j <=b-1; j++)
      {
         printf(" ");

      }
      for (int z = 1; z <=i; z++)
      {
         printf("* ");

      }
      b--;
      printf("\n");
    }
    
    return 0;
}



