// insertion sort is stable,not adaprtive,O(n^2)
// n*(n-1)/2 comparisons
// n*(n-1)/2 movements

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
    // for phase
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        // for each phase 
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
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
    insertionsort(a, n);
    traversal(a, n);
    return 0;
}