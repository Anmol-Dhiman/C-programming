#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char s;
    int a = 0, c = 0;
    while (feof(f) == 0)
    {
        s = fgetc(f);
        if (s == '\n' || s == '\t' || s == ' '||s==EOF)
        {
            c++;
        }
        else
        {
            a++;
        }
    }
    fclose(f);
    printf("the number of characters are %d\n",a);
    printf("the number of words are %d",c);

    return 0;
}