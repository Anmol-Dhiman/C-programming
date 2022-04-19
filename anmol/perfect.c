#include<stdio.h>

int main()
{
    int a;
    int b;
    int sum=0,i;
    printf("enter the no:");
    scanf("%d", &a);
    b=a;
    for ( i = 1; i <a; i++)
    {
     if (b%i==0)
     {
         sum = sum+i;
     }
     
    }
    if (sum==a)
    {
        printf("%d is the perfect number.", a);
    }
   
    return 0;
}
