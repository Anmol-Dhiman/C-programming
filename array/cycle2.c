#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the first term: ");
    scanf("%d", &n);
    printf("enter the second term: ");
    scanf("%d", &m);
    int c = 0;
    int a[m - n + 1];
    int s = 0;
    for (int i = n; i <= m; i++)
    {
        for (int j = 1; j > 0; j++)
        {
            if (i == 1)
            {

                break;
            }
            else if (i % 2 == 0)
            {
                i = i / 2;
                c++;
            }
            else
            {
                i = (3 * i) + 1;
                c++;
            }
        }
        a[s] = c;
        c = 0;
        s++;
    }
    int d = 0;
    int b = 0;
    for (int i = 0; i < m - n + 1; i++)
    {
        for (int j = 0; j < m - n + 1; j++)
        {
            if (a[i] >= a[j])
            {
                d++;
                b = a[i];
            }
        }

        if (d == m - n + 1)
        {
            printf("%d %d %d", n, m, b);
            break;
        }
        d = 0;
    }
    return 0;
}