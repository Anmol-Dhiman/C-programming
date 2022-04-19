#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the numbers: ");
    scanf("%d%d", &a, &b);
    int c;
    if (a < b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    int g = 0;
    for (int i = 1; i <= c; i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            g = i;
        }
    }
    printf("%d", g);
    return 0;
}