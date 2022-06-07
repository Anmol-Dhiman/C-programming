#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] - a[j] = 0)
            {
            }
        }
    }
    return 0;
}