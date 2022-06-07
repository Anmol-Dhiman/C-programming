#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int c=0,b=0,y=0;
    printf("enter the no:");
    scanf("%d", &a);
    
    
    
    for (int i = 1; i <=a; i++)
    {
      
       if (i%2==0)
       {
          c++;
       }
       else
       {
           b++;
       }
       y++;
      
       
       
       
    }
    printf("%d is the total numbers",y);
    printf("\n%d is the even numbers",c);
    printf("\n%d is the odd numbers",b);
    
    return 0;
}
