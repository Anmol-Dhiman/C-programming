#include <stdio.h>
int main()
{
    int nsum;
    scanf("%d", &nsum);
    int asum[nsum];
    int bsum[nsum];
    int csum[nsum];
    int dsum[nsum];
    for (int i = 0; i < nsum; i++)
    {
        scanf("%d", &asum[i]);
        scanf("%d", &bsum[i]);
        scanf("%d", &csum[i]);
        scanf("%d", &dsum[i]);
    }
    for (int i = 0; i < nsum; i++)
    {
        printf("%d\n", (csum[i] / asum[i]) + (dsum[i] / bsum[i]));
    }
    return 0;
}