#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n); //number of test cases.
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int c = 0; //count
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < pow(2, a[i]) - 1; j++)
        {

            if ((j ^ (j + 1)) == ((j + 2) ^ (j + 3)))
            {
                c++;
            }
           
        }
        printf("%d\n", c);
        c = 0;
    }
    return 0;
}
