#include <stdio.h>
int main()
{
    int n;
  
    scanf("%d", &n);
    int a[2 * n - 1][2 * n - 1];
    int c = 0;
    int d = n;
    int r = 1;
    int s = (2 * n) - 2;
    int y = (2 * n) - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {

            a[i][c] = d;
            a[c][i] = d;
            a[s][c] = d;
            a[c][s] = d;
            c++;
        }
        s--;
        d--;
        c = 0;
        c += r;
        r++;
        y -= 2;
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}