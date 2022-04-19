#include <stdio.h>
int add(int *, int *);
int main()
{
    int a, b;
    printf("enter the number: ");
    scanf("%d", &a);
    printf("enter the number: ");
    scanf("%d", &b);
    int *p, *q;
    p = &a;
    q = &b;
    int y;
    y = add(&a, &b);
    printf("the sum is: %d", y);

    return 0;
}
int  add(int *x, int *y)
{
    int s;
    s = *x + *y;
    return s;
}