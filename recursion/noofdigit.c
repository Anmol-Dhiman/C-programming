#include <stdio.h>

int jai(int a)
{
    return a * a;
}
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d", &x);
    int y;
    y = jai(x);
    printf("the square is %d", y);
    return 0;
}

