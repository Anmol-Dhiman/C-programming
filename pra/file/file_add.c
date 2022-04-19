#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "w");
    char s[100];
    printf("enter the string: ");
    gets(s);
    fprintf(f, s);
    fclose(f);
    
    printf("the file has been created succesfully");

    return 0;
}