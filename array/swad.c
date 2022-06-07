#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int sum = 0;
    int diff = 0;
    int m = 1;
    int division;
    printf("enter 1 for addition:\n");
    printf("enter 2 for subtraction:\n");
    printf("enter 3 for multiplication:\n");
    printf("enter 4 for division:\n");
    printf("enter the desired value:");
    scanf("%d", &a);
    int n;
    int f;
    printf("\nenter the number of input:");
    scanf("%d", &n);
    int b[10];
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the number:");
        scanf("%d", &b[i]);
    }
    f = b[0];
    switch (a)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            sum = sum + b[i];
        }
        printf("\nthe addition is %d\n", sum);
        break;

    case 2:
        for (int i = 0; i < n; i++)
        {
            diff = b[i + 1] - b[i];
        }
        printf("the difference is %d\n", diff);
        break;
    case 3:
        for (int i = 0; i < n; i++)
        {
            m = m * b[i];
        }
        printf("the multiplication is %d\n", m);
        break;
    case 4:
        for (int i = 0; i < n; i++)
        {
           division=f/b[i+1];
           
        }
        printf("the division is %d\n", division);
        break;
    }
    printf("jai shri ram ");
    printf("\naur bhi ladlae kae haal h ");

    return 0;
}
