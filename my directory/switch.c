#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long long int a,b;//declaring the variables.
    int c;
    printf("1. for addition\n2. for substraction\n3. for multiplication\n4. for division");
    //telling about the no for the particular operation.
    printf("\nenter the choice:");
    scanf("%d", &c);//taking the choice from the user.
    printf("\nenter the first value:");
    scanf("%llu", &a);//taking the first value from the user.
    printf("\nenter the second value:");
    scanf("%llu", &b);//taking the second value from the user.
    switch (c)
    {
    case 1:
        printf("the sum of the given numbers is:%llu", a+b);
        break;
    case 2: 
        printf("the difference of the given numbers is:%llu", a-b);
        break;
    case 3: 
        printf("the multiplication of the given numbers is:%llu", a*b);
        break;
    case 4:        
        printf("the division of the given numbers is:%llu", a/b);
        break;
    //getting the desired value.
    }
    return 0;
}
