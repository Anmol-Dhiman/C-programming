#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int n;
    int c=0;
    printf("enter the number of input you want to give:");
    scanf("%d", &n);
    printf("enter the values:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i!=j)
           {
               if (a[i]==a[j])
           {
              c++;
           }
           
           }
           
        }
        
    }
    printf("the number of duplicate is %d", c);

    return 0;
}
