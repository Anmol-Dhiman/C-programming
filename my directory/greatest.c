#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the three no:");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b&&a>c)
    {
        printf("%d is the greatest no.", a);

    }
    else if (b>a&&b>c)
    {
        printf("%d is the greatest no.", b);

    }
    else
    {
        printf("%d is the greatest no.", c);
    }
    
    return 0;
}
