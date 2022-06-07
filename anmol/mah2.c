#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int diff;
    int c;
     long long int a, n;
   
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
       
        scanf("%lld", &a);

        for (int j = 1; j > 0; j++)
        {
            diff = a - 4040;

            if ((diff < 4040 && diff > 0) || diff == 0)
            {
                c = diff;
                break;
            }

            a = a - 4040;
        }

        if (c == 0 || c == 1 || c == 2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
