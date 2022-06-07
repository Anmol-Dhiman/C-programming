#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    system("cls");
    printf("enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        printf("enter the number:");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
        }
        if (c > n / 2)
        {
            printf("%d is the majority element.", a[i]);
            return 0;
        }
        else
        {

            c = 0;
        }
    }
    printf("there is no majority element");
}
