#include<stdio.h>

int main()
{
    int i,a,e=0, o=0;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
     if (i%2==0)
     {
         e++;
     }
     else if (i%2!=0)
     {
        o++;
     }
     if (a==-1)
     {
         break;
     }
     
     
     
    }
    printf("the even no %d", e);
    printf("\nthe odd no %d", o);
    

    return 0;
}
