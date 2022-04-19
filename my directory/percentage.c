#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c,d,e;
    printf("enter the marks in five subjects:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    float x=a+b+c+d+e;
    printf("your percentage is:%8.8f", x/5);
    return 0;
}
