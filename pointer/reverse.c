#include <stdio.h>
char *reverse(char *);
int main()
{
    char s[10];
    printf("enter the string: ");
    gets(s);
    printf("%s", reverse(s));

    return 0;
}
char *reverse(char *p)
{
    int i;
    char c;
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    for (int l = 0; l < i / 2; l++)
    {
        c = *(p + l);
        *(p + l) = *(p + i - 1 - l);
        *(p + i - 1 - l) = c;
    }
    return p;
}