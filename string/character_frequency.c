#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    char a;
    int c = 0;
    printf("enter the character: ");
    scanf("%c", &a);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == a)
        {
            c++;
        }
    }
    printf("the frequency of the given character is %d", c);
    return 0;
}