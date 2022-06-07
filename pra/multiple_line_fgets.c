#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char s[20];
    while (fgets(s, 10, f) > 0)
    {
        puts(s);
    }
    fclose(f);

    return 0;
}