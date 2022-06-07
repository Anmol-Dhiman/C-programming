#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elments: ");
    scanf("%d", &n);
    int a[n];
    int c = 0;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number a[%d]: ", i, i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[i])
            {
                c++;
            }
        }
        b[i]=c;
        c=0;
    }
    for(int i=0; i<n; i++)
    {
       if (b[i]%2!=0)
       {
           
       }
       
    }

    return 0;
}