#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the three numbers:");//reading the number.
    scanf("%d%d%d", &a,&b,&c);
    if (a==b&&b==c)//checking whether all of them are same or not.
    {
        printf("all the enteries are same.\n");

    }
    else if (a==b||b==c||a==c)//checking whether two of them are same or not.
    {
        printf("two enteries are same.\n");
    }
    
    
    else if (a>b&&a>c)//comparing a with others.
    {
        printf("%d is the greatest number.\n", a);
    }
    else if (b>a&&b>c)//comparing b with others.
    {
         printf("%d is the greatest number.\n", b);
    }
    else if (c>a&&c>b)//comparing c with others.
    {
         printf("%d is the greatest number.\n", c);
    }
    //gettin the desired value.
    
    
    return 0;
}
