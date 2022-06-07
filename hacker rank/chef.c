#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], s[n];
    int array[n][100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i], &s[i]);
        for (int j = 0; j < a[i]; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int sumfirst[n][1];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i]; j++)
        {
            sum += array[i][j];
        }
        sumfirst[i][0] = sum;
        sum = 0;
    }
    for(int i=0; i<n; i++)
    {
       for(int i=; i<; i++)
       {
          
       }
    }

    return 0;
}