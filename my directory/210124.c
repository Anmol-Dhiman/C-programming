#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int x, a, c=1, s=0,i,d;
    printf("enter the value of x:");
    scanf("%d", &x);
    printf("enter the no of terms:");
     scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
       
        d=pow(x,c);
        c+=2;
        if (i%2==0)
        {
            d=d*-1;

        }
        printf("%d\n", d);
        s=s+d;

    }
    printf("the sum is %d", s);
    return 0;
}
