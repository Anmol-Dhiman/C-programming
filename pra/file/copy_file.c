#include <stdio.h>
int main()
{
    FILE *f, *c;
    char s[20];
    printf("enter the name of the file: ");
    gets(s);
    f = fopen(s, "r");
    c = fopen("text.txt", "w");
    char a;
    while (1)
    {
        a = fgetc(f);
        if (a == EOF)
        {
            break;
        }

        fputc(a, c);
    }
    fclose(f);
    fclose(c);

    return 0;
}