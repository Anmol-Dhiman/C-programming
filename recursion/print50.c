#include<stdio.h>

int print(int a){
    if (a==1)
    {
        printf("%d", a);
    }
    int c=0;
    c = c + print(a-1);
    printf("%d",c);
    
}
int main(int argc, char const *argv[])
{
    int x;
    printf("enter the no:");
    scanf("%d", &x);
    int y;
    y = print(x);
    return 0;
}
