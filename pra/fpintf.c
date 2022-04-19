#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file.txt", "w");
    int a, b;
    printf("enter the number: ");
    scanf("%d%d", &a, &b);
    fprintf(f, "sum of the %d and %d is %d", a, b, a + b);
    fclose(f);
    return 0;
}