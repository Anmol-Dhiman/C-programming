#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s[n][1000];
    int u[n][1000];
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &s[i][a]);
        }
        for (int z = 0; z < a; ++z)
        {

            for (int q = z + 1; q < a; ++q)
            {

                if (s[i][z] > s[i][q])
                {

                    d = s[i][z];
                    s[i][z] = s[i][q];
                    s[i][q] = d;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int i=0; i; i++)
        {
           
        }
    }

    return 0;
}