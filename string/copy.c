#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100];
    printf("enter the string: ");
    gets(s);
    char a[100];
    strcpy(a, s);
    printf("the coped string is\n");
    puts(a);
    return 0;
}