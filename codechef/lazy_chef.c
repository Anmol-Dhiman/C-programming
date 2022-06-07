#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x[n][1];
    int m[n][1];
    int d[n][1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i][0]);
        scanf("%d", &m[i][0]);
        scanf("%d", &d[i][0]);
    }
    int c, q;

    for (int i = 0; i < n; i++)
    {
        c = x[i][0] * m[i][0];
        q = x[i][0] + d[i][0];
        if (q>=c)
        {
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", q);
        }
    }
    return 0;
}