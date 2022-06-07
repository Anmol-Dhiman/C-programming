d#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i,x,y,j;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
        if (i%2==0)
        {
            x=0;
            y=1;
        }
        else
        {
            x=1;
            y=0;
        }
        for ( j= 1; j <= i; j++)
        {
            if (j%2==0)
            {
                printf("%d", y);

            }
            else
            {
                printf("%d", x);
            }
            
        }
        
        printf("\n");
    }
    
    return 0;
}
