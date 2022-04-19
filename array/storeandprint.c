#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    printf("enter the numbers:");
    for (int i = 0; i <=9  ; i++)
    {
        scanf("%d", &a[i]);

    }
    for (int i = 0; i <=9; i++)
    {
       printf("the input is %d\n", a[i]);
    }
    
    
    return 0;
}
