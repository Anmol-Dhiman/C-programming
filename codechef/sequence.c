#include <stdio.h>
int main()
{
    int gcd(int, int);
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

       int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * a[i]; j++)
        {
            sum += gcd(a[i] + (j * j), a[i] + (j + 1) * (j + 1));
        }
        printf("%d\n", sum);
    }

    return 0;
}
int gcd(int a, int b)
{
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
    return g;
}