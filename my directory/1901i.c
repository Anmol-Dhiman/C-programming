#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, c=2,s=0;
    printf("enter the no:");
    scanf("%d", &a);
    for (int i =1 ; i <=a; i++)
    {
        printf("the no is:%d\n", c);
        s=s+c;
        c+=2;
        
    }
    printf("the sum is:%d", s);
    
    return 0;
}
