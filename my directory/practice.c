#include<stdio.h>

int main(int argc, char const *argv[])
{
   
   int a, b, c;
   printf("enter the three no:");
   scanf("%d %d %d", &a, &b, &c);
   int sum=a+b+c;
   int average= sum/3;
    int product= a*b*c;
    printf("sum is %d\n", sum);
    printf("average is %d\n", average);
    printf("product is %d\n",product);
    if (a>b&&a>c)
    {
        printf("largest is %d\n", a); 
    }
    else if (a<b&&a<c)
    {
        printf("smallest is %d\n", a);
    } if (b>a&&b>c)
    {
        printf("largest is %d\n", b); 
    }
    else if (b<a&&b<c)
    {
        printf("smallest is %d\n", b);
    }
     if (c>b&&c>a)
    {
        printf("largest is %d\n", c); 
    }
    else if (c<b&&c<a)
    {
        printf("smallest is %d\n", c);
    }
    
   
   
    return 0;
}
