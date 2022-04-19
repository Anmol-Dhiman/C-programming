#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    float i , s=0;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <=5; i++)
    {
        printf("1/%f + ", i);
        s=s+1/i;
    }
    printf("the sum is:%2.2f", s);
    
    return 0;
}
