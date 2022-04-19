#include <stdio.h>
void sort(int *, int);
int main()
{
    int n;
    printf("enter the number of inputs: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    sort(a, n);

    return 0;
}
void sort(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > *p)
        {
            *p = *(p + i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}