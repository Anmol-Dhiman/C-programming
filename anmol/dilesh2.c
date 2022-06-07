#include <stdio.h>

int odd(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d", &x);
    int y;
    y = odd(x);
    printf("the sum is %d", y);
    printf("the sum is %d", y);
    printf("the sum is %d", y);
    printf("the sum is %d", y);
    return 0;
}
