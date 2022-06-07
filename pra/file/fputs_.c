#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "a");
    char a[20];
    printf("enter the string: ");
    gets(a);
    fputs(a, f);
    return 0;
}