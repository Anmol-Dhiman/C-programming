#include <stdio.h>
int main()
{
    long long t;
    scanf("%lld", &t);
    long long n[t];
    long long a[t][100];
    for (long long i = 0; i < t; i++)
    {
        scanf("%lld", &n[i]);
        for (long long j = 0; j < n[i]; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    int count = 0;
    int max = 0;
    int max_till_now=0;
    for (long long i = 0; i < t; i++)
    {
        for (long long j = 0; j < n[i]; j++)
        {
            count += a[i][j];
            if (count > 0 && count > max)
            {
                max += count;
            }

            else if (count < 0)
            {
                count = 0;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}