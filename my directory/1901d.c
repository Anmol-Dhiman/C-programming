#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c=0;
    printf("enter the no:");
    scanf("%d", &a);
    
    for (int i = 1; i <=a ; i++)
    {
        if (i%2!=0)
        {
            printf("the odd no: %d\n", i);
            c=c+i;
        }
        
    }
    printf("the sum of odd numbers are: %d\n", c);
    
    return 0;
}
