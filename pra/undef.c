#include<stdio.h>
#define sum(a,b) a+b
int main()
{ 
    printf("the sum is %d", sum(3,4));
    #undef sum(a,b)
    printf("the sum is %d\n", sum(3,5));
    return 0;
}