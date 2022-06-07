#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of input: ");
    scanf("%d", &n);
    unsigned int a[n];
    int c = 0;
    int d = 0;
    for (int i = 0; i <n; i++)
    {
        printf("enter the number a[%d]: ", i);
        scanf("%d", &a[i]);
       
    }
    printf("the decneding order is: ");
    for (int z = 0; z < n; z++)
    {

        for (int i = 0; i < n; i++)
        {
            c = 0;

            for (int j = 0; j < n; j++)
            {
                if (a[i] >= a[j])
                {
                    c++;
                }
            }
            if (c == n)
            {
                printf("%d  ", a[i]);
                a[i] = 0;
                break;
            }
        }
    }
    return 0;
}