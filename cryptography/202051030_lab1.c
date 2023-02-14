
/*
Anmol
202051030
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adjustplainText(char plainText[])
{

    for (int i = 0; i < strlen(plainText); i++)
    {
        if (plainText[i] == 'j')
        {
            plainText[i] = 'i';
        }
    }

    int len = 100;
    char *temp = calloc(len, sizeof(char));
    int j = 0;
    // handles repition
    for (int i = 0; i < strlen(plainText); i++)
    {
        if (plainText[i] == plainText[i + 1])
        {
            temp[j++] = plainText[i];
            temp[j] = 'x';
            temp[++j] = plainText[i + 1];
        }
        else
        {
            temp[j++] = plainText[i];
        }
    }
    int size = strlen(temp);
    // Make sures the length is even
    if (size % 2 != 0)
    {
        temp[size++] = 'x';
        temp[size] = '\0';
    }
    printf("\nEdited plainText: %s", temp);
    strcpy(plainText, temp);
}
void printMatrix(char matrix[5][5])
{
    printf("key matrix : \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%c ", matrix[i][j]);
        printf("\n");
    }
}

void generatematrix(char key[], char matrix[5][5])
{

    for (int i = 0; i < strlen(key); i++)
    {
        if (key[i] == 'j')
        {
            key[i] = 'i';
        }
    }

    int len = strlen(key);

    int i, j, k, flag = 0, *visited;
    visited = (int *)calloc(26, sizeof(int));
    for (i = 0; i < len; i++)
    {
        if (key[i] != 'j')
            visited[key[i] - 97] = 2;
    }

    visited['j' - 97] = 1;

    i = 0;
    j = 0;

    for (k = 0; k < len; k++)
    {
        if (visited[key[k] - 97] == 2)
        {
            visited[key[k] - 97] -= 1;
            matrix[i][j] = key[k];
            j++;
            if (j == 5)
            {
                i++;
                j = 0;
            }
        }
    }

    for (k = 0; k < 26; k++)
    {
        if (visited[k] == 0)
        {
            matrix[i][j] = (char)(k + 97);
            j++;
            if (j == 5)
            {
                i++;
                j = 0;
            }
        }
    }
}

void playFairCipherEncryption(char *plainText, char matrix[5][5], char *cipherText)
{

    int len = strlen(plainText);
    int a, b, c, d; // positions of plainText characters in matrix

    for (int i = 0; i < len; i += 2)
    {
        // find positions of plainText characters in matrix
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (plainText[i] == matrix[j][k])
                {
                    a = j;
                    b = k;
                }
                if (plainText[i + 1] == matrix[j][k])
                {
                    c = j;
                    d = k;
                }
            }
        }

        // encrypt plainText characters
        if (b == d)
        { // same column
            cipherText[i] = matrix[(a + 1) % 5][b];
            cipherText[i + 1] = matrix[(c + 1) % 5][d];
        }
        else if (a == c)
        { // same row
            cipherText[i] = matrix[a][(b + 1) % 5];
            cipherText[i + 1] = matrix[c][(d + 1) % 5];
        }
        else
        { // different row and column
            cipherText[i] = matrix[a][d];
            cipherText[i + 1] = matrix[c][b];
        }
    }
}

void affineCipherEncryption(char *plainText, int a, int b, char *cipherText)
{
    // encrypt plainText using the Affine cipher with key (a, b)

    int len = strlen(plainText);
    for (int i = 0; i < len; i++)
    {
        int text = ((plainText[i] - 'a') * a) % 26;
        cipherText[i] = (text + b) % 26 + 'a';
    }
}
void shiftCipherEncryption(char *plainText, int key, char *cipherText)
{
    // encrypt plainText using the Shift cipher with key

    int len = strlen(plainText);
    for (int i = 0; i < len; i++)
    {
        cipherText[i] = (plainText[i] - 'a' + key) % 26 + 'a';
    }
}

int main()
{

    /*1. Consider a word (without any space) as a plainText. (Input)*/
    char plainText[100];
    printf("Enter the plain text of max lenght 100 characters and without any space : ");
    scanf("%s", plainText);

    /*2. Adjust the length of the plainText and handle the repetition of letter (if present) according to the
    rule of the Playfair cipher. If there is any J in the word convert it to I. Let the final word be ∆.*/
    adjustplainText(plainText);

    /*3. Print the word ∆. (Output)*/
    printf("adjusted plain text : %s\n", plainText);

    /*4. Consider a word as input and convert J (if any) to I and consider that converted word as the key
      K1. (Input)*/
    char keyWord1[25];
    printf("Enter the word which will be your 1st key i.e., K1 : ");
    scanf("%s", keyWord1);

    char matrix[5][5];

    /*5. Generate the 5 × 5 key matrix of the Playfair cipher from K1 and print it. (Output)*/
    generatematrix(keyWord1, matrix);
    printMatrix(matrix);

    /*6. Encrypt ∆ using the Playfair cipher where the key is K1. Let the cipherText be C1. Print the
    cipherText C1. (Output)*/
    char cipherText[100];
    playFairCipherEncryption(plainText, matrix, cipherText);
    printf("Playfair cipherText : %s\n", cipherText);

    /*7. Encrypt C1 using the Affine cipher where the key is K2 = (11, 15) ∈ Z26 × Z26. Let the cipherText
    be C2. Print the cipherText C2. (Output)*/
    affineCipherEncryption(cipherText, 11, 15, cipherText);
    printf("Affine cipherText : %s\n", cipherText);

    /*8. Encrypt C2 using the Shift cipher where the key is K3 (0 ≤ K2 ≤ 25). Let the cipherText be C3.
    Print the cipherText C3. (Output)*/
    int shiftKey;
    printf("Enter key for shift cipher: ");
    scanf("%d", &shiftKey);
    shiftCipherEncryption(cipherText, shiftKey, cipherText);
    printf("Shift cipherTest: %s\n", cipherText);
    return 0;
}
