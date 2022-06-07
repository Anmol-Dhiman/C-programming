#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c[n];
    int d[n];
    int k[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        scanf("%d", &c[i]);
        scanf("%d", &d[i]);
        scanf("%d", &k[i]);
    }
    int q = 0;
    int w = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        q = a[i] - c[i];
        if (q < 0)
        {
            q *= -1;
        }
        w = b[i] - d[i];
        if (w < 0)
        {
            w *= -1;
        }

        sum = q + w;
        if (k[i] < sum)
        {
            printf("NO\n");
        }
        else if (sum % 2 != 0 && k[i] % 2 != 0)
        {
            printf("YES\n");
        }
        else if (sum % 2 == 0 && k[i] % 2 == 0)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
    return 0;
}