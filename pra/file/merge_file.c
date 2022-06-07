#include <stdio.h>
int main()
{
    FILE *f, *r, *q;
    printf("enter the name of the first file: ");
    char s[20];
    char a[20];
    char d[20];
    gets(s);
    fflush(stdin);
    printf("enter the name of the second file: ");
    gets(a);
    printf("enter the name of the new file: ");
    fflush(stdin);
    gets(d);
    f = fopen(s, "r");
    r = fopen(a, "r");
    q = fopen(d, "w");
    char g;
    while (1)
    {
        g = fgetc(f);
        if (g == EOF)
        {
            break;
        }
        fputc(g, q);
    }
    fclose(f);
    while (1)
    {
        g = fgetc(r);
        if (g == EOF)
        {
            break;
        }
        fputc(g, q);
    }
    fclose(r);
    fclose(q);
    printf("both the files %s and %s are copied successfully!", s, a);
    return 0;
}