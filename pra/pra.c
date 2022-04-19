#include <stdio.h>
int main()
{
    int a[4] = {1, 3, 4, 5};
    int *p;
    p = &a[0];
    *(p + 3) = 7;
    printf("%d", a[3]);
    return 0;
}