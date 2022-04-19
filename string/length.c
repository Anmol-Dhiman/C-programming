#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[20];
    gets(s);
    int a = 1;
    for (int i = 1; i > 0; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        a++;
    }
    printf("%d", a);

    return 0;
}
