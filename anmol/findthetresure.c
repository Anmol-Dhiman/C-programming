#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    int a[10];
    printf("enter the number of test cases:");
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
       
        
    }

    int l;
    for (int i = 1; i <= t; i++)
    {
        printf("enter the length of the string:");
        scanf("%d", &l);
        for (int j = 0; j < l; j++)
        {
            printf("enter the number:");
            scanf("%d", &a[j]);
        }
    }

    return 0;
}
