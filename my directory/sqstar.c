#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i;
    
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <= a; i++) // first line will be printed from here.
    {
        printf("*");
    }
    printf("\n");
   
        for (int j = 1; j <=a-2; j++)//the mid content will be printed from here.
    
       { printf("*");
        
        for (int z = 1; z <= a-2; z++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
       }
     for ( i = 1; i <= a; i++) //last line will be printed from here.
    {
        printf("*");
    }

    return 0;
}
for ( ; i < ;i++)
{
    /* code */
}



