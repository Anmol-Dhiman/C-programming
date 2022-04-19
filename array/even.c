#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int n;
    printf("enter the number of input you want to give:");
    scanf("%d", &n);
    printf("enter the number:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the even enteries are written below \n");
    for (int i = 0; i < n; i++)
    {
       if (a[i]%2==0)
       {
           printf("%d ", a[i]);
       }

       
    }
    printf("\nthe odd enteries are written below \n");
    for (int i = 0; i < n; i++)
    {
       if (a[i]%2!=0)
       {
           printf("%d ",a[i] );
       }
       
    }
    
    
    
    return 0;
}
