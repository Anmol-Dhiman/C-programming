#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[n];
    int c=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}