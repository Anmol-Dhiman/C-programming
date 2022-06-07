#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);
    char a[l];
    int c = 0;

    for (int i = 0; i < l; i++)
    {
        a[i] = s[i];
    }

    return 0;
}