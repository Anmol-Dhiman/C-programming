#include <stdio.h>

void traversal(int a[], int b[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ", b[i]);
    }
    printf("\n");
}

void traveral_merge(int c[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", c[i]);
    }
    printf("\n");
}

void mergesort(int a[], int b[], int c[], int n, int m)
{
    int i, j, k;
    i = j = k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    printf("enter the number of input for first array:");
    scanf("%d", &n);
    int m;
    printf("enter the number of input for second array:");
    scanf("%d", &m);
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element for first element:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("enter the element for second element:");
        scanf("%d", &b[i]);
    }
    int c[n + m];
    traversal(a, b, n, m);
    mergesort(a, b, c, n, m);
    traveral_merge(c, n + m);
    return 0;
}