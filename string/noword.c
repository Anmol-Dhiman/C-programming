#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    long int l = strlen(s);
    int a = 1;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            a++;
        }
    }
    printf("the number of words in the given string is: %d ", a);
    return 0;
}