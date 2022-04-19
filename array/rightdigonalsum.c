#include <stdio.h>

int main()
{
    int n;
    printf("enter the order of the square matrix:\n");
    scanf("%d", &n);
    int a[n][n];
    int sum = 0;
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    printf("the sum of the digonal elemnts are:%d", sum);

    return 0;
}
