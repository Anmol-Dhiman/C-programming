#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i][0]; j++)
        {
            for (int z = 1; z < j; z++)
            {

                if (((a[i][1] % j) % z) == ((a[i][1] % z) % j))
                {
                    c++;
                }
            }
        }
        printf("%d\n", c);
        c = 0;
    }
    return 0;
}