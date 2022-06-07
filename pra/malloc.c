#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    p = (float *)malloc(4);
    *p = 4.5;
    printf("%f", *p);
    return 0;
}