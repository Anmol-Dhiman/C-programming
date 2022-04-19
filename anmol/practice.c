#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x=153,x1,c=3,m=100,sum=0,j;
    int v; 
    v = x;
      for ( j = 1; j <=c; j++)
    {
       x1 = v/m;
       v = v - x1*m;
       m = m/10;
       sum = sum + (x1*x1*x1);


    }
    if (sum == x)
    {
        printf("%d is the amstrong number.", x);
    }
    return 0;
}
