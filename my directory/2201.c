#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i;
    printf("enter the number of rows:");
    scanf("%d", &a);
    int b,j,z,c,d=1;
    b=a;
    for ( i = 1; i <=a; i++)
    {
        for ( j = 1; j <=b-1; j++)
        {
           printf(" ");

        }
        for ( z = 1; z <=2*i-1; z++)
        {
           printf("*");
        }
       b--;
       printf("\n");
    }
    
    c=a-1;
    
       for ( i = 1; i <=a; i++)
       {
          for ( j = 1; j <=d; j++)
          {
            printf(" ");
          }
          d++;
          d<=a;
          for ( z = 1; z <=2*c-1; z++)
          {
             printf("*");
          }
         c--;
         
          printf("\n");
       }
       
        
    

    
    return 0;
}
