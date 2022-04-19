#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char s[40];
    fread(s,sizeof(s),1,f);
    puts(s);
    return 0;
}