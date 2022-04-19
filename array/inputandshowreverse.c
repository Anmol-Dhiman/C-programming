#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int n;
    printf("enter the number you want to store in array:");
    scanf("%d", &n);
    printf("enter the number:");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
