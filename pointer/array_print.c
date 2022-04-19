#include <stdio.h>
int main()
{
    int a[5];
    int *p;
    p = &a[0];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number:");
        scanf("%d", p + i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i));
    }

    return 0;
}