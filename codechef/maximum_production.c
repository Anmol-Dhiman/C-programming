#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int d[t];
    int x[t];
    int y[t];
    int z[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &d[i]);
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
        scanf("%d", &z[i]);
    }
    int sum1;
    int sum2;
    for (int i = 0; i < t; i++)
    {
        sum1 = 7 * x[i];
        sum2 = (d[i] * y[i]) + ((7 - d[i]) * z[i]);
        if (sum1 > sum2)
        {
            printf("%d\n", sum1);
        }
        else
        {
            printf("%d\n", sum2);
        }
    }
    return 0;
}