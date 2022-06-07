#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c;
    printf("enter the no:");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
       for (int f = 1; f <=10; f++)
       {
           c=i*f;
           printf("%d * %d = %d\n", i,f,c);
       }
       
    }
    
    return 0;
}
