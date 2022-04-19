#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    char a[20];
    printf("enter the first string: ");
    gets(s);
    printf("enter the second string: ");
    gets(a);
    int i = 0;
    int c = 0;
    while (s[i] != '\0')
    {
        c++;
        i++;
    }
    int d = 0;
    int j = 0;
    while (a[j] != '\0')
    {
        d++;
        j++;
    }
    int z = 0;
    int q = 0;
    if (c == d)
    {
        while (s[z] != '\0' && a[z] != '\0')
        {
            if (a[z] == s[z])
            {
                q++;
            }
        }
        if (q == d)
        {
            printf("the strings are equal.");
        }
    }
    else
    {
        printf("the string are not equal.");
    }

    return 0;
}