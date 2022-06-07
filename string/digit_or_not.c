#include <stdio.h>
#include <string.h>
int main()
{
    char s;
    printf("enter the character: ");
    scanf("%c", &s);
    if (s >= '0' && s <= '9')
    {
        printf("the character is a digit");
    }
    else
    {
        printf("the character is not a digit.");
    }

    return 0;
}