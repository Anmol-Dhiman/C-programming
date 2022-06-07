#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("enter the string: ");
    char s[20];
    gets(s);
    char ch;

    int l = strlen(s);
    char a[l];
    for (int i = 0; i < l; i++)
    {
        ch = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        putchar(ch);
    }
1
    return 0;
}