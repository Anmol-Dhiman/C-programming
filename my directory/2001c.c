#include<stdio.h>

int main()
{
    int a, i, s=0;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <a; i++)
    {
        if (a%i==0)
        {
            printf("%d\t", i);
            s=s+i;
        }
        
    }
    if (s==a)
    {
        printf("\n %d is a perfect no. ", a);

    }
    else
    {
        printf("\n %d is not a perfect no.", a);
    }
    
    
    return 0;
}
