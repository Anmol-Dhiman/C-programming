// this sorting algorithm is stable, adaptive,O(n^2)

#include <stdio.h>

void bubblesort(int a[], int n)
{

    int s = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        int c = 1;
        for (int j = 0; j < s; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                c = 0;
            }
        }
        s--;
        if (c == 1)
        {
            break;
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
        printf("enter the input: ");
        scanf("%d", &a[i]);
    }
    bubblesort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}