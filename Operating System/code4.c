#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
    }

    int *ptr = a;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}