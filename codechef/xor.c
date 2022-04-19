#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int j = 0;

    int c = 0;
    for (int i = 0; i < pow(2, a[j]) - 1; i++)
    {
        if ((i ^ (i + 1)) == ((i + 2) ^ (i + 3)))
        {
            c++;
        }
        if (i > pow(2, a[j]) - 1)
        {
            j++;
            i = 0;
        }
    }
    return 0;
}