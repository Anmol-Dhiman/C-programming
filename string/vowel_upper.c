#include <stdio.h>
#include <string.h>

#include <ctype.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);

    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        {
            s[i] = toupper(s[i]);
        }
    }
    puts(s);

    return 0;
}