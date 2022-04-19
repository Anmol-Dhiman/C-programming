#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100], b[100];
    int n;
    printf("enter the number of input you want to give:");
    scanf("%d", &n);
    printf("enter the numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }

    return 0;
}
