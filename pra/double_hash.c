#include <stdio.h>
#define rule(a, b) a##b + a / b
int main()
{
    printf("the outcome is %d", rule(3, 4));
    return 0;
}


