#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,j,i;
    
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 0; i <a; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("*");

        }
        printf("\n");
    }
    
   
    
    return 0;
}
