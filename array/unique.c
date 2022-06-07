#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int n;
    int c = 0;
    printf("enter the number of input you want to give:");
    scanf("%d", &n);
    printf("enter the number:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the unique enteries are:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    c++;
                }
            }
        }
        if (c == 0)
        {
            printf("%d ", a[i]);
        }
        c = 0;
    }

    printf("\njai shri ram ");
    printf("\naur bhi ladlae kae haal h ");
    return 0;
}
