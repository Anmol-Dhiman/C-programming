#include<stdio.h>

int main(int argc, char const *argv[])
{
   int a,b,i,j,c=0;
   printf("enter the starting range:");
   scanf("%d", a);
   printf("enter the end of the range:");
   scanf("%d", b);
   printf("the prime number between %d and %d", a,b);
   if (a=1)
   {
      a++;
   }
   
   for ( i = a; i <=b; i++)
   {
      for ( j = 2; j <= i/2; j++)
      {
        if (i%j==0)
        {
           c++;
           break;
        }
        
      }
      if (c=0)
      {
         printf("%d\t", i);

      }
     
      
   }
   
   

    return 0;
}
