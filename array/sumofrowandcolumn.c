#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    printf("enter the order of the matrix:\n");
    scanf("%d%d", &n, &m);
    int a[n][m];
    int sum = 0;
    int sum2=0;
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the given matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of the row:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + a[i][j];
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    printf("the sum of the column:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum2 = sum2 + a[j][i];
        }
        printf("%d\n", sum2);
        sum2 = 0;
    }

    return 0;
}
