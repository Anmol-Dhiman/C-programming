#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n]; //number of items.
    int w[n]; //weight
    int p[n][1000];
    int q[n][50];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &w[i]);
        for (int j = 0; j < a[i]; j++)
        {
            scanf("%d", &p[i][j]);
        }
        for (int z = 0; z < a[i]; z++)
        {
            scanf("%d", &q[i][z]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            if (w[i] > q[i][j])
            {
                sum += p[i][j];
                w[i] = w[i] - q[i][j];
            }

            else if (w[i]==0||w[i]<q[i][j])
            {

                sum += (p[i][j] / q[i][j]) * w[i];
                break;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}