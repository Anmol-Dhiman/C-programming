#include<stdio.h>

int main()
{
    int n,b,j=1,x=0,y;
    printf("enter the no:");
    scanf("%d" , &n);
    y=n;
    for (int i = n; i>0 ; i++)
    {
       b = n%2;
       x = x + b*j;
       j=j*10;
       n=n/2;
    }
    printf("the binary number of %d is: %d", y,x);
    
    return 0;
}
