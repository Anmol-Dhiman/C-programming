#include<stdio.h>

int main()
{
    int a,c=0,i;
    printf("enter the no:");
    scanf("%d", &a);
    for ( i = a; i >0; )
    {
       i = i/10;
       c++;
    }
    printf("%d is the no of digits in the given number.", c);
    
    return 0;
}
