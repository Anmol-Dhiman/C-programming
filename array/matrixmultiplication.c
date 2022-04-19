#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3], b[3][3];
    printf("enter 9 elemnts of first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d", &a[i][j]);
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d", &b[i][j]);
        }
        
    }
    

    return 0;
}
