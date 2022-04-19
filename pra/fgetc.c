#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char s;
    int a;

    while (feof(f) == 0)
    {
        s = fgetc(f);
        printf("%c", s);
    }
    fclose(f);
    return 0;
}