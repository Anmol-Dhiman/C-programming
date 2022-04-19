#include <stdio.h>
int main()
{
    char s[10];
    FILE *f;
    f = fopen("file.txt", "r");
    while (fgets(s, 8, f) != NULL)
    {
        printf("%s\n", s);
    }
    fclose(f);

    return 0;
}