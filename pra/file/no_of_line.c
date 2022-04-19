#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char s;
    int c = 1;
    while (feof(f) == 0)
    {
        s = fgetc(f);
        if (s == '\n')
        {
            c++;
        }
    }
    fclose(f);
    printf("the number of line in the text file is %d", c);

    return 0;
}