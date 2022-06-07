#include <stdio.h>
int main()
{
    int a, b, *p, *q, **r;
    printf("enter the number: ");
    scanf("%d", &a);
    printf("enter the number: ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    r = p;
    q = r;
    p = q;
    printf("the first swaped numbers is : %d %d" );
    return 0;
}