#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);
    char a[l];
    for (int i = 0; i < l; i++)
    {
        a[i] = toupper(s[i]);
    }
    puts(a);

    return 0;
}