#include <stdio.h>
void count(char *);
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    count(s);
    return 0;
}
void count(char *p)
{
    int v = 0;
    int c = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u' || *(p + i) == 'A' || *(p + i) == 'E' || *(p + i) == 'I' || *(p + i) == 'O' || *(p + i) == 'U')
        {
            v++;
        }
        else if (*(p + i) >= 'a' && *(p + i) <= 'z')
        {
            c++;
        }
    }
    printf("vowoels are %d\n", v);
    printf("consonants are %d", c);
}