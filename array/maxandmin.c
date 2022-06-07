#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int c;
    int b;
    int n;
    printf("enter the number of inputs you wanted to give:");
    scanf("%d", &n);
    printf("enter the numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                c = a[i];
            }
        }
        if (a[i]==a[i+1])
        {
            c=a[i];
        }
        
        for (int z = i + 1; z < n; z++)
        {
            if (a[i] <= a[z])
            {
                b = a[i];
            }
        }
    }
    printf("the maximum is %d", c);
    printf("\nthe minimum is %d", b);

    return 0;
}
