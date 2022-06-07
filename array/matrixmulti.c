#include <stdio.h>

int main()
{
    int n;
    int d;
    int sum = 0;
    int s = 0;
    int t = 0;
    printf("enter the order of the matrix:");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    printf("enter the first matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the first matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the second matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the second matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                d = a[i][s] * b[s][j]; //s=0,sum=0.
                sum = sum + d;
                s++;
            }
            c[i][j] = sum;
            sum = 0;
            s = 0;
        }
    }
    printf("\nthe matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
