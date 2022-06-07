#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "rb");
    char s[30];
    while (fread(s, sizeof(s), 1, f) > 0)
    {
        puts(s);
    }

    fclose(f);

    return 0;
}