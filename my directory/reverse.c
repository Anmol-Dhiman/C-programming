#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the two digit no:");
    scanf("%d", &a);
    int b=a-(a/10)*10;
    b=b*10;
    a=a/10;
    printf("the reversed no is %d", b+a);

    return 0;
}
