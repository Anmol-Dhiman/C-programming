#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "w");
    char s[20];
    printf("enter the string:    ");
    gets(s);
    fwrite(s, sizeof(s), 1, f);
    fclose(f);
    return 0;
}