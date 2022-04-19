#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,i,c=0,s=0;
    printf("enter the no a:");
    scanf("%d",  &a);
    printf("enter the no b:");
    scanf("%d", &b);
    if (a=1)
    {
        i=a+1;
    }
    else
    {
        i=a;
    }
    
    for ( ; i <=b; i++)
    {
      for (int j = 2; j <=i/2; j++)
      {
         if (i%j==0)
         {
            c++;

         }
         
      }
      if (c==0)
      {
         printf("%d\t", i);
         s=s+i;

      }
      c=0;
      
    }
    printf("\nthe sum is %d", s);

    
    return 0;
}
