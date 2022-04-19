#include <stdio.h>

int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    for (int i = 10; i >= 1; i--)
    {
        if (a % i == 0)
        {
            printf("the highest divisor is %d", i);
            break;
        }
    }

    return 0;
}
