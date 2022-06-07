#include<stdio.h>

int sum(int a){
    if (a==1)
    {
        return a;
    }
    int s;
    s = a+sum(a-1);
    return s;
    
}
int main(int argc, char const *argv[])
{
    int x;
    printf("enter the no:");
    scanf("%d", &x);
    int y;
    y = sum(x);
    printf("the sum is %d", y);
    
    return 0;
}
