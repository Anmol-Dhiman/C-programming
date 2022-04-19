#include <stdio.h>

int main()
{
    int a[100];
    int n;
    int c = 0;
    int b[100];
    printf("enter the number of input you want to give:");
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
                b[i] = a[i];
            }
        }
        if (c == n)
        {
            printf("the minmum value is %d", b[i]);
        }
        c = 0;
    }

    return 0;
}
