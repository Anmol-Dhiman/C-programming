#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,s=0;
    printf("enter the no:");
    scanf("%d", &a);

    for (int f = 1; f<=a; f++)
    {
        printf("%d + ",f);
    }
    
     for (int i = 1; i <=a; i++)
    {
        s=s+i;
    }
    
    printf("\n%d", s);
    return 0;
}
