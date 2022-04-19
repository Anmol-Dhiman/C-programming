#include<stdio.h>

int main(int argc, char const *argv[])
{
    
      for (int i = 0; i <2; i++)   // r1 = 2, c1 = 2
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                matrixFinal[i][j] += matrix1[i][k] * matrix2[k][j]; // check with an example of 2 x 2
            }
        }
    }
    return 0;
}
