#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    printf("enter the number of rows:");
    scanf("%d", &n);
    printf("enter the number of columns:");
    scanf("%d", &m);
    int a[n][m];
    int c = 0;
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                c++;
            }
        }
    }
    if (c > 1)
    {
        printf("the given matrix is spare matrix.");
    }
    else
    {
        printf("the given matrix is not spare matrix.");
    }

    return 0;
}
