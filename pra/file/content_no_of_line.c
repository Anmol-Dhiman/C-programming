#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char s;
    int c = 0;
    while (feof(f) == 0)
    {
        s = fgetc(f);
        printf("%c", s);
        if (s == '\n' || s == EOF)
        {
            c++;
        }
    }
    fclose(f);
    printf("\nthe number of the line the txt file is %d", c);

    return 0;
}