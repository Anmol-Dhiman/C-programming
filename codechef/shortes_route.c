#include <stdio.h>
int main()
{
    long long t;
    scanf("%lld", &t);
    long long N[t];
    long long M[t];
    long long A[t][10000];
    long long B[t][10000];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &N[i]);
        scanf("%lld", &M[i]);
        for (int j = 0; j < N[i]; j++)
        {
            scanf("%lld", &A[i][j]);
        }
        for (int j = 0; j < M[i]; j++)
        {
            scanf("%lld", &B[i][j]);
        }
    }

    long long d = 0;
    long long c = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < M[i]; j++)
        {
            if (A[i][B[i][j] - 1] > 0)
            {
                printf("0\n");
            }
            else if (A[i][B[i][j]] == 0)
            {
                for (int z = 1; z <= B[i][j] - 1; z++)
                {
                    if (A[i][B[i][j] - z - 1] != 1)
                    {
                        c++;
                    }
                    else
                    {
                        c++;
                        break;
                    }
                }
                for (int g = 1; g <= N[i] - B[i][j]; g++)
                {
                    if (A[i][B[i][j] + g - 1] != 2)
                    {
                        d++;
                    }
                    else
                    {
                        d++;
                        break;
                    }
                }
                if (c < d)
                {
                    printf("%lld ", c);
                }
                else if (d < c)
                {
                    printf("%lld ", d);
                }
                else if (c != 1 && d != 1 && c == d)
                {
                    printf("%lld ", c);
                }

                else
                {
                    printf("-1 ");
                }
                c = 0;
                d = 0;
            }
        }
    }
    return 0;
}