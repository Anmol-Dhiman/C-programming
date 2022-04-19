#include <stdio.h>
#include <string.h>
int main()
{
    char s[30];
    printf("enter the string: ");
    gets(s);
    int l = strlen(s);
    int q = 0;
    int w = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
        {
            q++;
        }
        else if (s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z')
        {
            w++;
        }
    }
    printf("the number of vowels in the given string is: %d\n", q);
    printf("the number of consonants in the given string is: %d", w);
    return 0;
}