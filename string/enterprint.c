#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[2][10];
    int i;
    system("cls");
    printf("enter the string:\n");
    for (int i = 0; i < 2; i++)
    {
        gets(s[i]);
    }
    for (i = 0; i < 2; i++)
    {
        puts(s[i]);
    }

    return 0;
}
