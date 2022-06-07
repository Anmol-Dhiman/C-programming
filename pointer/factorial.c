#include <stdio.h>
int factorial(int *);
int main()
{
    printf("enter the number: ");
    int n;
    scanf("%d", &n);
    printf("the factorial is %d", factorial(&n));
    return 0;
}
int factorial(int *p)
{
    int c = 1;
    for (int i = *p; i >= 2; i--)
    {
        c = c * (i);
    }
    return c;
}