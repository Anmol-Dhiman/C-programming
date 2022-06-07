#include<stdio.h>

int main()
{
    int x;
    int b;
    printf("enter the no:");
    scanf("%d", &x);
    b=x;

    int c=0,m=1,sum=0;

     
     int x1;
    for (int  i = x ; i > 0; )
    {
        i = i/10;
    
        c++;
    }
    for (int z = 1; z <c; z++)
    {
       m = m*10;
    }
    for (int j = 1; j <=c; j++)
    {
       x1 = b/m;
       b = b - x1*m;
       m = m/10;
       sum = sum + (x1*x1*x1);


    }
    if (sum == x)
    {
        printf("%d is the amstrong number.", x);
    }
    
    return 0;
}





