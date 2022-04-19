#include <stdio.h>
typedef struct
{
    int a;
    int b;
    char c[20];
    float d;

} data;

int main()
{
    void print(data);
    data d1;
    printf("enter the number: ");
    scanf("%d", &d1.a);
    printf("enter the another number: ");
    scanf("%d", &d1.b);
    printf("enter the third number: ");
    scanf("%f", &d1.d);
    fflush(stdin);
    printf("enter the string: ");
    gets(d1.c);
    print(d1);
    return 0;
}

void print(data b)
{
    printf("%d\n%d\n%0.2f\n", b.a, b.b, b.d);
    puts(b.c);
}