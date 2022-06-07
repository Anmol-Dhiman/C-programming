#include <stdio.h>
int main()
{
    const int a = 1;
    int *p;
    p = &a;
    printf("%d", a);
    ++(*p);
    printf("%d", a);

    return 0;
}