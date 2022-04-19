#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n=2,a[2][2];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
