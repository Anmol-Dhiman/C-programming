#include <stdio.h>
char *reverse(char *);
int main()
{
    char s[20];
    char *a;
    printf("enter the string: ");
    gets(s);
    a = reverse(s);
    puts(s);
    return 0;
}
char *reverse(char *p)
{
    int i;
    int c;
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