#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s;
    printf("enter the character: ");
    scanf("%c", &s);
    int a;
    a = islower(s);
    if (a > 0)
    {
        printf("the leter is not in uppercase");
    }
    else
    {
        printf("the character is in upper case");
    }
    return 0;
}