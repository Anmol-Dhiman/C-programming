#include <stdio.h>
typedef struct
{
    int a : 8;
} jai;
int main()
{
    jai a;
    printf("enter the age of the person: ");
    scanf("%d", &a);
    printf("the age is %d", a);
    return 0;
}