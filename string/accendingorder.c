#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);
    for (int j = 'a'; j <= 'z'; j++)
    {
        for (int i = 0; i < l; i++)
        {

            if (s[i] % j == 0)
            {
                printf("%c", s[i]);
            }
        }
    }
    return 0;
}
