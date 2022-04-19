#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int n;
    int b;
    printf("enter the number of input:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
          if (a[i]<a[j])
          {
              b=a[i];
          }
          
       }
       
    }
    printf("the second largest number is %d", b);
    
    
    return 0;
}
