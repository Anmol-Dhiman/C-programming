#include <stdio.h>
#define int long long
int main()
{
    int n;
    scanf("%lld", &n);

    int q;
    scanf("%lld", &q);
    int a[n];

    int x[q];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < q; i++)
    {
        scanf("%lld", &x[i]);
    }
    int sum = 1;
    int count;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = x[i] - a[j];
            sum = sum * count;
        }
        if (sum < 0)
        {
            printf("NEGATIVE\n");
        }
        else if (sum > 0)
        {
            printf("POSITIVE\n");
        }
        else
        {
            printf("0\n");
        }
        sum = 1;
    }

    return 0;
}