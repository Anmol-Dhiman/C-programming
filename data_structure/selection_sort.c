// no. of comparsions n*(n-1)/2
// no. of swaps (n-1)
// selection sort is not stable
// not adaptive
#include <stdio.h>

void traversal(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mid = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[mid])
            {
                mid = j;
            }
        }
        int temp = a[i];
        a[i] = a[mid];
        a[mid] = temp;
    }
}

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
    traversal(a, n);
    selectionsort(a, n);
    traversal(a, n);
    return 0;
}