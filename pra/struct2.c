#include <stdio.h>
struct jai
{
    int a;
    char s[20];
    float d;
};

int main()
{
    struct jai j;
    printf("enter the number:");
    scanf("%d", &j.a);
    fflush(stdin);
    gets(j.s);
    scanf("%f", &j.d);

    printf("%d", j.a);
    puts(j.s);
    printf("%0.3f", j.d);
    return 0;
}