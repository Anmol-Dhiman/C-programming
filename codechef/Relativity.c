#include <stdio.h>
#define int long long
int main()
{
    int t;
    scanf("%lld", &t);
    int g[t];
    int c[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &g[i]);
        scanf("%lld", &c[i]);
    }
    int sum;
    for (int i = 0; i < t; i++)
    {
        sum = (c[i] * c[i]) / (2 * g[i]);
        printf("%lld\n", sum);
    }
    return 0;
}