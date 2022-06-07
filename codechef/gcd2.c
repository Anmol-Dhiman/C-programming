#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ai;
    int ao;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * a[i]; j++)
        {
            ai = a[i] + (j * j);
            ao = a[i] + (j + 1) * (j + 1);
            int c;
            if (ai < ao)
            {
                c = ai;
            }
            else
            {
                c = ao;
            }
            int g = 0;
            for (int i = 1; i <= c; i++)
            {
                if ((ai % i == 0) && (ao % i == 0))
                {
                    g = i;
                }
            }
            sum += g;
        }
        printf("%d\n", sum);
    }

    return 0;
}
