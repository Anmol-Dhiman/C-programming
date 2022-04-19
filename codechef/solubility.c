#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int r; //result
    for (int i = 0; i < n; i++)
    {
        r = (a[i][1] + (100 - a[i][0]) * a[i][2])*10;
        printf("%d\n", r);
    }
    return 0;
}