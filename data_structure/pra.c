#include <stdio.h>
int main()
{
    int a;
    char b;
    char c[] = "anmol";

    int *a_ptr = &a;
    char *b_ptr = &b;
    char *c_ptr = &c;

    printf("The address is : %d\n", a_ptr);
    printf("The address is : %d\n", b_ptr);
    printf("The address is : %d\n", c_ptr);

    return 0;
}