#include <stdio.h>

int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    int s;
    s = fibo(a);
    printf("the fibo number is: %d", s);
    return 0;
}
