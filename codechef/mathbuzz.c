#include <stdio.h>
#define int unsigned long long

int main()
{
    int r;
    int k;
    int sum = 0;
    int ways = 1;
    int q = 1;

    scanf("%llu", &r);
    scanf("%llu", &k);
    int a[k];
    int p[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%llu", &a[i]);
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%llu", &p[i]);
    }

    for (int i = 0; i < k; i++)
    {

        for (int j = 0; j < r; j++)
        {
            ways *= (a[i] - j) % 998244353;
        }

        q = (p[i] * ways) % 998244353;
        sum += q;
        ways = 1;
    }
    printf("%llu\n", sum % 998244353);
    return 0;
}
