#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    gets(s);

    for (int i = strlen(s); i > 0; i--)
    {
        if (s[i] != " ")
        {
            printf("%c", s[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}