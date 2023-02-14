#include <stdio.h>
#include <string.h>
void modifyText(char *text)
{
    int textLength = strlen(text);
    for (int i = 0; i < textLength; i++)
    {
        if (text[i] == 'j')
        {
            text[i] = 'i';
        }
    }
    for (int i = 0; i < textLength - 1; i++)
    {
        if (text[i] == text[i + 1])
        {
            for (int j = textLength; j > i + 1; j--)
            {
                text[j] = text[j - 1];
            }
            text[i + 1] = 'x';
            textLength++;
        }
    }
    if (textLength % 2 == 1)
    {
        text[textLength] = 'x';
        textLength++;
    }
}

void displayMatrix(char matrix[5][5])
{
    printf("key matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}
void createMatrix(char *key, char matrix[5][5])
{
    int length = strlen(key);
    // replace 'j' with 'i'
    for (int i = 0; i < length; i++)
    {
        if (key[i] == 'j')
        {
            key[i] = 'i';
        }
    }
    // fill matrix with letters from key
    for (int i = 0, k = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = key[k];
            k++;
            if (k >= length)
                break;
        }
    }
    // fill remaining spaces in matrix with alphabet
    for (int i = 0; i < 26; i++)
    {
        if (i == 9)
        { // skip 'j'
            continue;
        }
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (matrix[j][k] == '\0')
                {
                    int duplicate = 0;
                    for (int l = 0; l < length; l++)
                    {
                        if (key[l] == 'a' + i)
                        {
                            duplicate = 1;
                            break;
                        }
                    }
                    if (!duplicate)
                    {
                        matrix[j][k] = 'a' + i;
                        break;
                    }
                }
            }
        }
    }
}

void playFairCipherEncryption(char *plaintext, char matrix[5][5], char *ciphertext)
{
    // encrypt plaintext using the Playfair cipher and matrix

    int len = strlen(plaintext);
    int a, b, c, d; // positions of plaintext characters in matrix

    for (int i = 0; i < len; i += 2)
    {
        // find positions of plaintext characters in matrix
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (plaintext[i] == matrix[j][k])
                {
                    a = j;
                    b = k;
                }
                if (plaintext[i + 1] == matrix[j][k])
                {
                    c = j;
                    d = k;
                }
            }
        }

        // encrypt plaintext characters
        if (b == d)
        { // same column
            ciphertext[i] = matrix[(a + 1) % 5][b];
            ciphertext[i + 1] = matrix[(c + 1) % 5][d];
        }
        else if (a == c)
        { // same row
            ciphertext[i] = matrix[a][(b + 1) % 5];
            ciphertext[i + 1] = matrix[c][(d + 1) % 5];
        }
        else
        { // different row and column
            ciphertext[i] = matrix[a][d];
            ciphertext[i + 1] = matrix[c][b];
        }
    }
}

void affineCipherEncryption(char *plaintext, int a, int b, char *ciphertext)
{
    int len = strlen(plaintext);
    for (int i = 0; i < len; i++)
    {
        int c = (a * (plaintext[i] - 'a') + b) % 26;
        ciphertext[i] = c + 'a';
    }
}
void shiftCipherEncryption(char *text, int key, char *ciphertext)
{
    int textLength = strlen(text);
    for (int i = 0; i < textLength; i++)
    {

        ciphertext[i] = (text[i] - 'a' + key) % 26 + 'a';
    }
}

int main()
{

    // 1. Consider a word (without any space) as a plaintext. (Input)/
    char plaintext[100];
    printf("Enter the plain text without any space:  ");
    scanf("%s", plaintext);

    /*2. Adjust the length of the plaintext and handle the repetition of letter (if present) according to the
    rule of the Playfair cipher. If there is any J in the word convert it to I. Let the final word be ∆.*/
    modifyText(plaintext);

    // 3. Print the word ∆. (Output)/
    printf("adjusted plain text : %s\n", plaintext);

    /*4. Consider a word as input and convert J (if any) to I and consider that converted word as the key
      K1. (Input)*/
    char keyWord1[25];
    printf("Enter the key K1 : ");
    scanf("%s", keyWord1);

    char matrix[5][5];

    // 5. Generate the 5 × 5 key matrix of the Playfair cipher from K1 and print it. (Output)/
    createMatrix(keyWord1, matrix);
    displayMatrix(matrix);

    /*6. Encrypt ∆ using the Playfair cipher where the key is K1. Let the ciphertext be C1. Print the
    ciphertext C1. (Output)*/
    char ciphertext[100];
    playFairCipherEncryption(plaintext, matrix, ciphertext);
    printf("Playfair ciphertext : %s\n", ciphertext);

    /*7. Encrypt C1 using the Affine cipher where the key is K2 = (11, 15) ∈ Z26 × Z26. Let the ciphertext
    be C2. Print the ciphertext C2. (Output)*/
    affineCipherEncryption(ciphertext, 11, 15, ciphertext);
    printf("Affine ciphertext : %s\n", ciphertext);

    /*8. Encrypt C2 using the Shift cipher where the key is K3 (0 ≤ K2 ≤ 25). Let the ciphertext be C3.
    Print the ciphertext C3. (Output)*/
    int shiftKey;
    printf("Enter key for shift cipher: ");
    scanf("%d", &shiftKey);
    shiftCipherEncryption(ciphertext, shiftKey, ciphertext);
    printf("Shift cipherTest: %s\n", ciphertext);
    return 0;
}