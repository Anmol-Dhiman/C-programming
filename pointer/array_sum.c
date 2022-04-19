#include <stdio.h>
int sum(int *, int);
int main()
{
    int n;
    printf("enter the number of input: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    int y;
    y = sum(a, n);
    printf("the sum of the elements of the array is %d", y);
    return 0;
}
int sum(int *p, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += *(p + i);
    }
    return s;
}