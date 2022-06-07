#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][5];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {

        s = a[i][0] * a[i][1];
        if (s < 10)
        {
            printf("0\n");
        }

        else if (s >= 10 && s < 21)
        {
            printf("%d\n", a[i][2]);
        }
        else if (s >= 21 && s < 42)
        {
            printf("%d\n", a[i][3]);
        }
        else
        {
            printf("%d\n", a[i][4]);
        }
    }
    return 0;
}