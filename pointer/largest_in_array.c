#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of inputs: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("no input is given,");
        return 0;
    }
    int a[n];
    int *p;
    p = &a[0];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (*p < *(p + i))
        {
            *p = *(p + i);
        }
    }
    printf("the maximum is : %d", *p);

    return 0;
}