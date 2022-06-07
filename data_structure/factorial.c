#include <stdio.h>
int main()
{
    int factorial(int);
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int s = factorial(n);
    printf("%d\n", s);
    return 0;
}
int factorial(int a)
{
    int s = 1;
    if (a >= 2)
    {
        s = s * a * factorial(a - 1);
    }
    else
    {
        return s;
    }
}