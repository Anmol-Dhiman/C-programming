#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b=9,s=0,i;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
        printf("%d\n", b);
        s=s+b;
        b=b*10+9;

    }
    printf("the sum is:%d", s);
    return 0;
}
