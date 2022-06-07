#include <stdio.h>
int main()
{
    FILE *f, *r;
    char s[20];
    printf("enter the name of the file: ");
    gets(s);
    f = fopen(s, "r");
    r = fopen("temp2.txt", "w");
    char a;

    while ((a = fgetc(f)) != EOF)
    {
        a -= 100;
        fputc(a, r);
    }
    fclose(f);
    fclose(r);
    f = fopen(s, "w");
    r = fopen("temp2.txt", "r");
    while ((a = fgetc(r)) != EOF)
    {

        fputc(a, f);
    }

    return 0;
}