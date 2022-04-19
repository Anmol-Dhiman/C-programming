#include <stdio.h>
int main()
{
    int s;
    scanf("%d", &s);
    int n[s];
    int k[s];
    int a[s][10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &n[i]);
        scanf("%d", &k[i]);
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    return 0;
}