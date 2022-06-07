#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100];
    printf("enter the name: ");
    gets(s);
    puts(s);
    int i=0, a = 0, d = 0, f = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            a++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            d++;
        }
        else
        {
            f++;
        }
        i++;
    }
    printf("the number of alphabets are %d\n", a);
    printf("the number of numericals are %d\n", d);
    printf("the number of special characters are %d\n", f);

    return 0;
}