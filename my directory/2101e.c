#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,i,s=0;
    printf("enter the lower limit:");
    scanf("%d", &a);
    printf("enter the upper limit:");
    scanf("%d", &b);
    for ( i = a; i <=b; i++)
    {
       if (i%9==0)
       {
           printf("%d\t", i);
           s=s+i;
       }
       
    }
    printf("\nthe sum is %d", s );
    
    return 0;
}
