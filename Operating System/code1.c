#include <stdio.h>
int main()
{
    int a;
    char b;
    char c = "anmol";
    int *ptr1 = &a;
    char *ptr2 = &b;
    char *ptr3 = &c;
    printf("the address is %d \n", ptr1);
    printf("the address is %d \n", ptr2);
    printf("the address is %d \n", ptr3);

    return 0;
}