#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        n = n / 10;
        if (n == 0)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    printf("%d",c);
    int d=pow(10,c);
    printf("\n%d",d);
    return 0;
}