#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c=1;
    printf("enter the no:");
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
        for (int f = 1; f <=i; f++)
        {
           
           printf("%d\t",c );
           c++;
        }
        printf("\n");
    }
    
    return 0;
}
