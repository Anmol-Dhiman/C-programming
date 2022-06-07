#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int s = 1;
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        
    }
    for (int i = 0; i < n; i++)
    {
       
        while (a > 0)
        {
            s = s * a;
            a--;
        }
        printf("%lld\n", s);
        s = 1;
    }

    return 0;
}