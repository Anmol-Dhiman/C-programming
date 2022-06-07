#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows:");
    scanf("%d", &n);
    int pattern[n][n];

    for (int i = 0; i < n; i++)
    {
        pattern[i][0] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pattern[i][j] = 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
        int s = i - 1;

        for (int j = 1; j <= i; j++)
        {
            int a = j - 1;
            pattern[i][j] = pattern[s][j] + pattern[s][a];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%3d   ", pattern[i][j]);
        }
        printf("\n");
    }

    return 0;
}
