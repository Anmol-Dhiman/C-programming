#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s[n][1000];
    int u[n][1000];
    int a[1000];
    int d = 0;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        for (int j = 0; j < a[i]; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int z = 0; z < a[i]; ++z)
        {

            for (int q = z + 1; q < a[i]; ++q)
            {

                if (s[i][z] > s[i][q])
                {

                    d = s[i][z];
                    s[i][z] = s[i][q];
                    s[i][q] = d;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < a[i]; j++)
        {
            if (s[i][j] + 1 == s[i][j + 1])
            {
                c++;
            }
        }
        printf("%d\n", a[i] - c - 1);
    }

    return 0;
}