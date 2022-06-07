#include <stdio.h>
int main()
{
    int length(char *);
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l;

    l = length(s);
    printf("the length of the string is: %d", l);

    return 0;
}
int length(char *p)
{
    int n = 0;
    for (int i = 0; i >= 0; i++)
    {

        if (*p == '\0')
        {
            break;
        }
        else
        {
            n++;
            p += 1;
        }
    }
    return n;
}