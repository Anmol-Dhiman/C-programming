#include<stdio.h>

int main(int argc, char const *argv[])
{
    static int i=1;
    printf("%d", i++);

    return 0;
}
