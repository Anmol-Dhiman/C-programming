#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    int a, b;
    fscanf(f, "%d%d", &a, &b);
    printf("the input is %d %d", a, b);
    return 0;
}