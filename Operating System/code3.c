#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int *a_ptr = &a;
    int *b_ptr = &b;
    if (*a_ptr > *b_ptr)
        printf("The maximum number is : %d", *a_ptr);
    else
        printf("The maximum number is : %d", *b_ptr);
    return 0;
}