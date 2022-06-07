#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int evensum = 0, oddsum = 0;
    printf("enter 10 numbers:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
        {
            evensum = evensum + a[i];
        }
        else
        {
            oddsum = oddsum + a[i];
        }
    }
    printf("the sum of even numbers are %d", evensum);
    printf("\nthe sum of odd numbers are %d", oddsum);

    return 0;
}
