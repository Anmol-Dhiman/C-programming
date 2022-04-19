#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a, i ,s=0,x,d=2;
    printf("enter the no of terms:");
    scanf("%d", &a);
    for ( i = 1; i <=a; i++)
    {
       x=pow(i,d);
       s=s+x;
       printf("%d\t", x);

    }
    printf("\nthe sum is:%d", s);
    return 0;
}
