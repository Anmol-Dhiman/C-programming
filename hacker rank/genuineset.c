#include <stdio.h>
int main()
{
    int n;
    int d = 0;
    scanf("%d", &n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        int s[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &s[i]);
        }
        for (int i = 0; i < a; ++i)
        {

            for (int j = i + 1; j < a; ++j)
            {

                if (s[i] > s[j])
                {

                    d = s[i];
                    s[i] = s[j];
                    s[j] = d;
                }
            }
        }
        int q[a - 1];
        for (int i = 0; i < a - 1; i++)
        {
            q[i] = s[i] - s[i + 1];
        }
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = i + 1; j < a - 1; j++)
            {
                if (q[i] == q[j])
                {
                    c++;
                }
            }

            if (c >= 1)
            {
                break;
            }
            c = 0;
        }
        printf("%d", a - c - 2);
    }
    return 0;
}