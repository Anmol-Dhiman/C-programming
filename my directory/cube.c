#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c;
    printf("enter the no:");
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
        c=i*i*i;
        printf("cube of %d is = %d\n", i,c);
    }
    

    return 0;
}
