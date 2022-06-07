#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "a");
    int n;
    printf("enter the number of inputs: ");
    scanf("%d", &n);
    fflush(stdin);
    char s[200];
    for (int i = 0; i < n; i++)
    {
        fgets(s, sizeof(s), stdin);
        fputs(s, f);
        
    }

    fclose(f);

    return 0;
}