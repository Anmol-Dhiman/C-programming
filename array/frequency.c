#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100], c[100];
    int n;
    printf("enter the number of input you wanted to give:");
    scanf("%d", &n);
    printf("enter the numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c[i]++;
            }
        }
        printf("%d occurs %d times\n", a[i], c[i]);
    }

    return 0;
}
