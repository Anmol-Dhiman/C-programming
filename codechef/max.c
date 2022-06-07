#include <stdio.h>

int main()
{
    int a[100];
    int n;
    int b;
    int c;
    int s;
    int f;
    int d;
    printf("enter the number of input:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
       printf("enter the number:");
       scanf("%d", &a[i]);

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                c++;
                b = a[i];
            }
        }
        if (c == n)
        {
           s = b;
           break;
        }
        c = 0;
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                d++;
                f = a[i];
            }
        }
        if (d==n)
        {
            f=a[i];
            break;
        }
        d=0;
    }
    printf("the maximum is %d", 2*(f-s));
    return 0;
}
