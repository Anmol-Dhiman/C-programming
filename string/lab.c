#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter the email: ");
    gets(s);
    int l = strlen(s);
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '@')
        {
            c++;
        }
    }
    if (c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
    return 0;
}