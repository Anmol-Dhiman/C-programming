#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    printf("enter the string:");
    gets(a);
    int s;
    int j;
    s = strlen(a);
    while (s >= 0)
    {
        while (s >= 0 && a[s] == ' ')
        {
            s--;
        }

        while (s >= 0 && a[s] != ' ')
        {
            s--;
        }
        j = s + 1;
        while (a[j] != ' ')
        {
            printf("%c", a[j]);
            j++;
        }
        printf(" ");
    }
    return 0;
}