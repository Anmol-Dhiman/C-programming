#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "a");
    char s[20];
    int n;
    printf("enter the line number which you want to change: ");
    scanf("%d", &n);
    printf("\nenter the data: ");
    fflush(stdin);
    gets(s);
    char c;
    int d = 0;
    while (feof(f) == 0)
    {
        c = fgetc(f);
        if (c == '\n')
        {
            d++;
            if (d == n - 1)
            {
                fwrite(s, sizeof(s), 1, f);
            }
            else if (d == n)
            {
                break;
            }
        }
    }
    fclose(f);
    printf("\nthe file has been edited successfully!!");

    return 0;
}