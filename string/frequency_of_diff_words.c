#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);

    int c = 0;
    int d = 0;
    int a[10];
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = d; s[j] != ' '; j++)
        {
            c++;
        }
        d = d + 1 + c;
        a[i] = c;
        k++;
        c = 0;
        if (d > l)
        {
            break;
        }
    }

    int q = 0;
    int b = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (a[i] >= a[j])
            {
                q++;
                b = a[i];
            }
        }

        if (d == k)
        {
            printf("the maximum is %d", b);
            break;
        }
        q = 0;
    }

    return 0;
}