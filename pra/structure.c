#include <stdio.h>
struct jai
{
    int a;
    int b;
    char s[20];
};
int main()
{
    struct jai new;
    printf("enter the inputs: ");

    scanf("%d", &new.a);
    scanf("%d", &new.b);
    gets(new.s);
    printf("%d ", new.a);
    printf("%d ", new.b);
    puts(new.s);

    return 0;
}
