#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    
    f = fopen("file.txt", "w");
    char s[100];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        fputc(s[i], f);
    }

    return 0;
}