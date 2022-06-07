#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    char s2[20];
    printf("enter the name: ");
    gets(s1);
    printf("enter the name: ");
    gets(s2);
    printf("%s is the friend of %s\n", s1, s2);
    char d[20];
    strcpy(d, strcat(s1, s2));
    puts(d);
    return 0;
}