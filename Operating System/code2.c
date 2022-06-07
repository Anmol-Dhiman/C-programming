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
    printf("The sum of the two numbers are : %d", *a_ptr + *b_ptr);

    return 0;
}