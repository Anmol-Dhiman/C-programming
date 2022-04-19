#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '*';
        }
    }
    puts(s);
    return 0;
}