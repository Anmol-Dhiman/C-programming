#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int c = 0, d = 0, u = 0;
    int s[n][10000];
    int q = 0;
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
        for (int j = 0; j < a[i]; j++)
        {
            for (int z = 1; z > 0; z++)
            {
                u = s[i][j] % 2;
                if (u == 0)
                {
                    c++; //zero vala
                }
                else if (u == 1)
                {
                    d++; //one vala
                }
                s[i][j] = s[i][j] / 2;
                if (s[i][j] == 0)
                {
                    break;
                }
            }
            if (c == d)
            {
                q += 43;
            }
            else
            {
                q -= 5;
            }

            c = 0;
            d = 0;
        }
        if (q > 0)
        {
            printf("Happy Life\n");
        }
        else if (q <= 0)
        {
            printf("Sad Life\n");
        }
        q = 0;
    }

    return 0;
}