// this is the code of count sort
// this program will take the extra space
// the time complexity is O(n)
#include <stdio.h>
void traverse(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void countsort(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int b[max + 1];
    for (int i = 0; i <= max; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    int z = 0;
    for (int i = 0; i <= max; i++)
    {

        while (b[i] != 0)
        {
            a[z] = i;
            b[i]--;
            z++;
        }
    }
}

int main()
{
    int n;
    printf("enter the number of element:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    traverse(a, n);
    countsort(a, n);
    traverse(a, n);
    return 0;
}