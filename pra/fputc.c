#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "a");
    char s[20];
    printf("enter the string: ");
    gets(s);
    fputs(s, f);
    fclose(f);
    return 0;
}