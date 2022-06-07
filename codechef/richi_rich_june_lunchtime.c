#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a[t];
    int b[t];
    int x[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", (b[i] - a[i]) / x[i]);
    }
    return 0;
}