#include <stdio.h>
#include<math.h>

int main()
{    int a,b,c,d,i;
    
    printf(" enter the no. a:");
    scanf("%d", &a);
    printf("enter the no. b:");
    scanf("%d", &b);
    printf("enter the no. c:");
    scanf("%d", &c);

    printf("d= (b*b)-(4*a*c)= %d\n", d=(b*b)-(4*a*c));
    
    if (d==0)
    {
        printf("the roots are real and equal");
    }
    
    else if (d>0)
    {
        printf("the roots are real and unequal");
    }
    else
    {
        printf("the roots are imaginary");
    }
    i=sqrt(d);
     printf("x1=(-b+i)/2*a= ", (-b+i)/2*a);
     printf("x2=(-b-i)/2*a=", (-b-i)/2*a);
     return 0; 
    }
