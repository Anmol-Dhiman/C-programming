#include <stdio.h>
int main()
{
    char s[20];
    printf("enter the name of the file: ");
    gets(s);
    int n;
    n = remove(s);
    if (n==0)
    {
        printf("the file is removed");

    }
    else
    {
        printf("the file is not removed");
    }
    
    
    return 0;
}