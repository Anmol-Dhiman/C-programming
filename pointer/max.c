#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the two number: ");
    scanf("%d%d", &a, &b);
    int *p, *q;
    p = &a;
    q = &b;
    if (*p > *q)
    {
        printf("%d is greater.", *p);
    }
    else if (*p == *q)
    {
        printf("both are equal");
    }
    else
    {
        printf("%d is greater", *q);
    }

    return 0;
}