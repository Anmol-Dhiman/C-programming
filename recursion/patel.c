#include<stdio.h>

int main()
{
    int a;
    printf("enter the no:");
    printf("jai shri ram \n");
    printf("jai bhole baba ki\n");
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
       for (int j = 1; j <=i; j++)
       {
           if (j%2!=0)
           {
               printf("1 ");

           }
           if (j%2==0)
           {
               printf("0 ");
           }
           
           
       }
       printf("\n");
       
    }
    
    return 0;
}
