#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter the two no:");
    scanf("%d%d", &a, &b);
    printf(a>b? "a is greator than b ": "b is greator than a  ");

    return 0;
}

