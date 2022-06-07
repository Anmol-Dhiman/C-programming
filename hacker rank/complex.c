#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n][100];
    for (int i = 0; i < n; i++)
    {
        gets(s[i][0]);
    }
    for (int i = 0; i < n; i++)
    {
        puts(s[i][0]);
    }
    
    return 0;
}