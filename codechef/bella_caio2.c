#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int D[n];
    int d[n];
    int p[n];
    int q[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &D[i]);
        scanf("%d", &d[i]);
        scanf("%d", &p[i]);
        scanf("%d", &q[i]);
    }
    int c = 1;
    int sum = 0;
    int m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < D[i] - d[i]; j++)
        {
            sum = 0;
            m = D[j] - d[j];
            sum = sum + (d[j] * pow(q[j], c));
            c++;
            m -= d[j];
            if (m < (D[j] - d[j]))
            {
                sum += m * pow(q[j], c);
                break;
            }
        }

        printf("%d\n", ((p[i] * D[i]) + sum));
        sum = 0;
        c = 1;
    }
    return 0;
}