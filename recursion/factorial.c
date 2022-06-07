#include <stdio.h>

int factorial(int number)
{
    if ((number == 1) || (number == 0))
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int a;
    int y;
    printf("enter the number you need the factorial of:");
    scanf("%d", &a);
    y = factorial(a);
    printf("the number is %d and the factorial is %d.", a,y);
    return 0;
}
