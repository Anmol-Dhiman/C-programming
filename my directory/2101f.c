#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,d,n,s,i,x;
    printf("enter the first term, common difference and number of terms:");
    scanf("%d%d%d", &a,&d,&n);
    s=a;
    printf("the terms are:\n");
    printf("%d+", s);

    for ( i = 1; i < n; i++)
    {
       x=a+i*d;
       s=s+x;
       printf("%d+", x);

    }
    printf("\nthe sum of the terms are:%d", s);

    return 0;
}
