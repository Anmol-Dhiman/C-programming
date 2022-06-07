#include <stdio.h>

int main()
{
    int n;
    long long int a[10];
    int x = 0;
    int c = 0;
    int b;
   
    scanf("%d", &n);

    for (int z = 0; z < n; z++)

    {
       
        scanf("%lld", &a[z]);
    }
    for (int z = 0; z < n; z++)
    {

        for (int i = 0; i >= 0; i++)
        {
            if (a[z] < 4040)
            {
                printf("NO\n");
                break;
            }

            for (int j = 0; j >= 0; j++)
            {

                x = (4040 * i) + (4041 * j);
                if ((4040 * i) > a[z])
                {
                    b = 0;
                    break;
                }

                if (x > a[z])
                {
                    break;
                }
                c = x;
            }

            if (c < a[z])
            {
                continue;
            }
            if (b == 0)
            {
                printf("NO\n");
                break;
            }

            if (c == a[z])
            {
                printf("YES\n");
                break;
            }
            if (c > a[z])
            {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
