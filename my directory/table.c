#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i,b=1;//declaring all the variables.
    printf("enter the no:");
    scanf("%d", &a);//reading the given variable.
    
    for ( i=a; i <=a*10;  i+=a)//all the necessary conditions.
    {   
        printf("%d * %d = %d\n",a,b,i);//printing desires value.
        b++;
       
    }
    
    return 0;
}
