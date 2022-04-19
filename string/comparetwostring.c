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
    int d = strlen(a);
    int l = strcmp(s, a);
    if (l == 0)
    {
        printf("yes");
    }
    else if (l < 0 || l > 0)

    {
        printf("no");
    }

    return 0;
}