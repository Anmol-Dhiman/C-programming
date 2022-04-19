#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int z;     //remainder
    int c = 0; //count
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j > 0; j++)
        {
            z = a[i] % 10;
            if (z == 4)
            {
                c++;
            }
            a[i] = a[i] / 10;
            if (a[i] == 0)
            {
                break;
            }
        }
        printf("%d\n", c);
        c = 0;
    }
    return 0;
}