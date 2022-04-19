#include <stdio.h>

void traversal(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionsort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {  
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j + 1] < a[j])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
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
    printf("before sorting\n");
    traversal(a, n);
    printf("after sorting\n");
    insertionsort(a, n);
    traversal(a, n);
    return 0;
}