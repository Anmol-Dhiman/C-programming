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
    int c;
    int d = 0;
    int prime = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c = a[i] / 2;
            if (c > 1)
            {
                for (int j = c + 1; j < a[i]; j++)
                {
                    for (int z = 2; z <= j / 2; z++)
                    {
                        if (j % z == 0)
                        {
                            d++;
                        }
                    }
                    if (d == 0)
                    {
                        prime++;
                    }
                    d = 0;
                }
                printf("%d\n", prime + 1);
                prime = 0;
            }

            else
            {
                printf("1\n");
            }
        }
        else
        {
            c = (a[i] - 1) / 2;
            if (c > 1)
            {
                for (int j = c + 1; j <= a[i]; j++)
                {
                    for (int z = 2; z <= j / 2; z++)
                    {
                         if (j % z == 0)
                        {
                            d++;
                        }
                    }
                    if (d == 0)
                    {
                        prime++;
                    }
                    d = 0;
                }
                printf("%d\n", prime + 1);
                prime = 0;
            }

            else
            {
                printf("2\n");
            }
        }
    }
    return 0;
}