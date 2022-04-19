#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int a = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        a++;
        i++;
    }
    char d[a + 1];
    for (int i = 0; i <= a; i++)
    {
        d[i] = s[i];
    }
    printf("%s", d);

    return 0;
}