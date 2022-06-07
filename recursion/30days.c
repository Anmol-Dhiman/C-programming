#include<stdio.h>

int main()
{
    int a;
    printf("enter the no:");
    scanf("%d", &a);
    int b;
    b=a;
    int c;
    c;
   

    for (int i = 1; i <=a; i++)
    {
         c=i;
       for (int j = 1; j <=i; j++)
       {
          printf("%d ", j);
       }
       for (int z = 1; z <=2*b-2; z++)
       {
           printf("  ");
       }
       b--;
       for (int y = 1; y <=i; y++)
       {
          printf("%d ", c);
          c--;
       }
       c=i;
      
       printf("\n");
    }
    
    return 0;
}
