#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    printf("enter 10 numbers for the average:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int j = 0; j <= 9; j++)
    {

        sum = sum + a[j];
    }
    float average;
    average = sum / 10;
    printf("the average is %f", average);

    return 0;
}
