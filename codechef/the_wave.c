#include <stdio.h>
#define int long long

int fun(int a[], int n, int x)
{
    int count;
    int sum = 1;
    for (int j = 0; j < n; j++)
    {
        count = x - a[j];
        sum = sum * count;
    }
    return sum;
}

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
        sum = fun(a, n, x[i]);
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