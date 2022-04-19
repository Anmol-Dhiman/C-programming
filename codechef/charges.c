#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int k[n];
    char s[n][100000];
    int q[n][100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &k[i]);
        scanf(" %s", &s[i]);
        for (int j = 0; j < k[i]; j++)
        {
            scanf("%d", &q[i][j]);
        }
    }
    printf("%s", s[0][0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k[i]; j++)
        {
            if (s[i][q[i][j]] == 1)
            {
                if (k[i] % 2 != 0)
                {
                    s[i][q[i][j]] = 0;
                }
            }
            else if (s[i][q[i][j]] == 0)
            {
                if (k[i] % 2 != 0)
                {
                    s[i][q[i][j]] = 1;
                }
            }
            for (int z = 0; z < a[n]; z++)
            {
                if (s[i][z] == s[i][z + 1])
                {
                    sum += 2;
                }
                else
                {
                    sum += 1;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }
    }

    return 0;
}