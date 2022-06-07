// addition function
void addition_of_two(int rows, int columns, int matrix1[10][10], int matrix2[10][10], int matrixFinal[10][10])
{

    // addition of elements
    for (int i = 0; i < rows; i++) // rows= 2
    {
        for (int j = 0; j < columns; j++)  // cols = 2
        {
            matrixFinal[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nFinal Matrix: \n");
    // displaying the final matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%5d", matrixFinal[i][j]);
        }
        printf("\n");
    }
}

//subtraction function
void subtraction_of_two(int rows, int columns, int mat1[10][10], int mat2[10][10], int matFinal[10][10])
{

    // subtraction of elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matFinal[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\nFinal Matrix: \n");
    // displaying the final matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%5d", matFinal[i][j]);
        }
        printf("\n");
    }
}