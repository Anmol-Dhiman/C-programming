#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number of input:");
    scanf("%d", &a);
    int s[100];
    for (int i = 0; i < a; i++)
    {
        printf("enter the number:");
        scanf("%d", &s[i]);
    }
    printf("the even numbers are:\n");
    for (int i = 0; i < a; i++)
    {

        if (s[i] % 2 == 0)
        {
            printf("%d ", s[i]);
        }
    }
    printf("\nthe odd numbers are:\n");
    for (int i = 0; i < a; i++)
    {

        if (s[i] % 2 != 0)
        {
            printf("%d ", s[i]);
        }
    }

    return 0;
}
