#include <stdio.h>

int main()
{
    int a, b;
    int c;
    int n = 1;
    int s[100];
    int d = 0;
    int r = 0;
    printf("enter the range:");
    scanf("%d%d", &a, &b);
    printf("%d %d ", a, b);
    for (int i = a; i <= b; i++)
    {
        c = i;
        for (int j = 0; j >= 0; j++)
        {
            n = 1;
            if (c == 1)
            {
                break;
            }

            else if (c % 2 == 0)
            {
                c = c / 2;
            }
            else
            {
                c = 3 * c + 1;
            }
            n++;
        }
        s[d] = n;
        d++;
    }
    for (int i = 0; i <= b - a; i++)
    {
        for (int j = 0; j <= b - a; j++)
        {
            if (s[i] >= s[j])
            {
                r++;
            }
        }
        if (r == b - a)
        {
            printf("%d ", s[i]);
            break;
        }
    }

    return 0;
}
