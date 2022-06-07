#include <stdio.h>
#include <math.h>
int main()
{
    long t;
    scanf("%ld", &t);
    long n[t];
    long m[t];
    for (long i = 0; i < t; i++)
    {
        scanf("%ld", &n[i]);
        scanf("%ld", &m[i]);
    }

    unsigned long long y;
    long long b = (pow(10, 9) + 7);
    unsigned long long a, c;

    for (long i = 0; i < t; i++)
    {
        a = (pow(2, n[i]) - 1);

        c = (pow(a, m[i]));
        y = c % b;
        printf("%llu\n", y);
    }
    return 0;
}
