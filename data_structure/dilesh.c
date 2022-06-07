#include <stdio.h>
void traversal(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertion(int a[], int index, int data, int n)
{
    int i;
    for (i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = data;
}
int main()
{
    int a[5];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    traversal(a, 4);
    // array,index,data,number of element
    insertion(a, 2, 4, 4);
    traversal(a, 5);
    return 0;
}