#include <stdio.h>
 
void sort(int n, int *ptr)
{
    int i, j, t;
 
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (*(ptr + j) < *(ptr + i))
            {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }

    // print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}

// Driver code
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
    sort(n, a);

    return 0;
}