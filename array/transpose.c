#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    printf("enter the order of the matrix:\n");
    scanf("%d%d", &n, &m);
    int a[n][m];
    int c[n][m];
    printf("enter the elements of the matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
