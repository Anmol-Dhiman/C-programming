#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;

    f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("nothing is there");
    }
    else
    {

        char ch;
        while (!feof(f))
        {
            ch = fgetc(f);
            printf("%c", ch);
        }
    }
    exit(1);
}