#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a,c=3,p,i,x,b,s=0,f;
    b=a;

    printf("enter the three digit no:");
    scanf("%d", &a);
    int x1= a/100;
    int x2=a-x1*100;
    int x3= x2/10;
    int x4=x2-x3*10;
    
    for ( i = 100; i <= a; i-=90)
    {
        i>0;
        x=b/i;
        b=b-x*i;
        p=pow(x,c);
        s=s+p;
        if (b=x4)
        {
            f=pow(x4,c);
            s=s+f;
        }
        

    }
    if (s==a)
    {
         printf("%d is an armstrong number", a);

    }
    
    
    return 0;
}
