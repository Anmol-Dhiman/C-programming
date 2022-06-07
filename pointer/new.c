#include<stdio.h>
int main()
{
    int a,*p;
    printf("enter the number: ");
    scanf("%d", &a);
    p=&a;
    printf("the value of the given variable is : %d\n",*p);
    printf("the address of the given variable is : %d",p);
    return 0;
}