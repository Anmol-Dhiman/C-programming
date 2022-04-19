#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i,e=0,r=0;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
       if (i%2==0)
       {
           e++;
       }
       else
       {
           r++;
       }
       if (a==-1)
       {
           break;
       }
       
       
    }
    printf("%d is the even number.", e);
    printf("\n%d is the odd number.", r);
    
    return 0;
}
