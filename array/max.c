#include <stdio.h>


int main()
{
    int a[100];
    int n;
    int b;
    int d = 0;
    printf("enter the number of input you want to give:");
    scanf("%d", &n);
    printf("enter the number:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                d++;
                b = a[i];
            }
        }

        if (d == n)
        {
            printf("the maximum is %d", b);
            break;
        }
        d = 0;
    }

    return 0;
}
