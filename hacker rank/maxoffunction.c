#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d%d%d%d", &a, &b,&c, &d);
    int y;
    y = max_of_four(a,b,c,d);
    printf("%d is the highest number among these four numbers.", y);
   
    return 0;
}
