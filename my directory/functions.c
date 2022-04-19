#include<stdio.h>



    unsigned long long int square(int a){
        return a*a;
    }
int main()
{
    int x;
    unsigned long long int s;
    printf("enter the value of x:");
    scanf("%d", &x);
    s = square(x);
    printf("%llu", s);


}