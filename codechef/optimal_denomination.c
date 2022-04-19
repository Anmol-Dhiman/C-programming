#include <stdio.h>
#define int long long
int main()
{
    int t;
    scanf("%lld", &t);
    int n[t];
    int a[10000][1000000];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n[i]);
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    return 0;
}