#include <stdio.h>
void reverse(int *, int);
int main()
{
    int n;
    printf("enter the number of input: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element: ");
        scanf("%d", &a[i]);
    }
    reverse(a, n);
    return 0;
}
void reverse(int *p, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", *(p + i));
    }
}