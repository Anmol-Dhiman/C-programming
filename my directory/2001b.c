#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b=1,i,s=0;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
        printf("%d + ", b);
        s=s+b;
        b=b*10 +1;
    }
   printf("\nthe sum is: %d", s);


    return 0;
}
