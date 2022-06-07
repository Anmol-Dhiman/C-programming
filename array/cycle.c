#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10000];
    int x, y;
    int i;
    int c = 0;
    printf("enter the range:");
    scanf("%d%d", &x, &y);
    int s, d;
 int b;
    d = y;
    for (i = x; i <= y; i++)
    {
        s = i;
        for (int y = s; y > 0;)
        {
            if (s % 2 == 0)
            {
                s = s / 2;
            }
            else
            {
                s = 3 * s + 1;
            }
            c++;
        }
        a[i] = c;
        c = 0;
    }
    for (i = x; i <= y; i++)
    {
        for (int j = i+1; j <=y; j++)
        {
            if (a[i]>=a[j])
            {
                b = a[i]
            }
            
        }
        

    }
    printf("the maximum cycle is %d", b);

    return 0;
}
