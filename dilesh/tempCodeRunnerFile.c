#include <stdio.h>
int main()
{
    long long int a;
     float b;
    scanf("%lld", &a);
    scanf("%f", &b);
    if ((a < 0 || a > 2000) || (b < 0 || b > 2000))
    {
        printf("%0.2f", b);
    }
    else if (a > b)
    {
        printf("%0.2f", b);
    }

    else if (a % 5 != 0)
    {
        printf("%0.2f", b);
    }
    else
    {
        printf("%0.2f", b - a - 0.5);
    }

    return 0;
}