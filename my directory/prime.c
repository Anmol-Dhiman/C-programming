#include<stdio.h>

int add(int a, int b){
    return a+b;
}


int main()
{
    int n, c=0,i;//declaring all the variables.
    printf("enter the no:");
    scanf("%d", &n);//taking the input from the user.
     for ( i = 2; i <= n/2; i++)
     {
        if (n%i==0)//if any of the value of i divides n then increment c.
        {
            c++;
        }
        
     }
     if (c==0)
     {
         printf("%d is a prime number.",n);//getting the desired value.

     }
     else
     {
         printf("%d is not a prime no.", n);
     }
     
     

    return 0;
}
