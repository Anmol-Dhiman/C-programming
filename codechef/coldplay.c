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
    int s;     //subtraction
    int c = 0; // count
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j > 0; j++)
        {
            a[i][0] = a[i][0] - a[i][1];
            if (a[i][0] >= 0)
            {
                c++;
            }

            else
            {
                break;
            }
        }
        printf("%d\n", c);
        c = 0;
    }
    return 0;
}