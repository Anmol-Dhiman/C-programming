#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c=4;
    printf("enter the no:");
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
       for (int j = 1; j <=i; j++)
       {
         printf("%d ", c+j);

       }
       printf("\n");
    }
    

    
    
    return 0;
}
