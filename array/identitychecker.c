#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the order of the matrix:");
    scanf("%d", &n);
    int a[n][n];
    int c = 0;
    int d = 0;
    int s = 0;
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                s++;
            }
            else if (a[c][c] == 1)
            {
                d++;
                c++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    if (d == n)
    {
        if (s == n * (n - 1))
        {
            printf("IDENTITY MATRIX.");
        }
    }
    else
    {
        printf("NON IDENTITY MATRIX.");
    }

    return 0;
}
