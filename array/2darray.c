#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number:");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", b[i][j]);
        }
    }

    return 0;
}
