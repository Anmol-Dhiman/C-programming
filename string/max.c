#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int q = 0;
    int l = strlen(s);
    int a[l];
    int d[l];
    int r = 0;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (s[i] == s[j])
            {
                q++;
            }
        }
        if (q == 1)
        {
            r++;
        }

        a[i] = q;
        q = 0;
        d[i] = s[i];
    }
    int f = 0;
    if (r == l)
    {
        printf("all the character comes only 1 time.");
    }
    else
    {

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l; j++)
            {
                if (a[i] >= a[j])
                {
                    f++;
                }
            }
            if (f == l)
            {
                printf("the character which comes maximum time is: %c\n", d[i]);
                printf("the number of time it comes: %d\n", a[i]);
                break;
            }
        }
    }
    return 0;
}