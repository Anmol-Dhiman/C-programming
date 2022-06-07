#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("kuch nahi h mere pass");
        exit(1);
    }
    char c;
    while (!feof(f))
    {
        c = fgetc(f);
        printf("%c", c);
    }

    return 0;
}