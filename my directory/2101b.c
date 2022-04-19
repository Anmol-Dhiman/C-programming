#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i,j, s=0;
    printf("enter the maximum limit:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
        for ( j= 1; j < i; j++)
        {
           if (i%j==0)
           {
               s=s+j;
           }
           
        }
        if (s==i)
        {
            printf("%d\t", i);
        }
        
    }
    
    
    return 0;
}
