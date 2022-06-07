#include <stdio.h>
int main()
{
    char *p, i;
    p = &i;
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", *p);
    }
    return 0;
}