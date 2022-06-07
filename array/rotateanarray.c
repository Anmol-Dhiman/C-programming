#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]);
    }
    int s;
    printf("enter the number from where you want to rotate the array: ");
    scanf("%d", &s);
    for(int i=s; i<n; i++)
    {
       printf("%d  ",a[i]);
    }
    for(int i=0; i<s; i++)
    {
       printf("%d  ",a[i]);
    }
    return 0;
}