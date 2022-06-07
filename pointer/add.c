#include <stdio.h>
int main()
{
    int a, b;
    int *p, *q;
    printf("enter the number: ");
    scanf("%d", &a);
    printf("enter the number: ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    printf("the sum is: %d", *p + *q);

    return 0;
}