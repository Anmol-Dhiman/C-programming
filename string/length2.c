#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[20];
    gets(s);
    int a = strlen(s);
    printf("%d", a);
    
}
