#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the name");
    gets(s);
    puts(strrev(s));

    return 0;
}