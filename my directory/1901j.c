#include<stdio.h>

int main()
{
    int a,b,c=1,i,j,z;
    
    printf("enter the no:");
    scanf("%d", &a);
    b=a;
    for ( i =1 ; i <=a; i++)
    {
        for ( j = 1; j <=b-1; j++)
        {
            printf(" ");
        }
        for ( z = 1; z <=2*i-1; z++)
        {
            printf("%d", c);
            
        }
        
        b--;
        c++;
        printf("\n");
        
    }
    
    return 0;
}
/*  1
   22
  333 */