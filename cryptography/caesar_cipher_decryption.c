#include <stdio.h>
#include <string.h>
int main()
{
    char cipher[100];
    printf("Enter the cipher text of 100 letters in upper case : ");
    gets(cipher);
    int key = 3;
    int cipher_lenght = strlen(cipher);

    for (int i = 0; i < cipher_lenght; i++)
    {
        int plain_text = (cipher[i] - 'A' - key) % 26 + 97;
        printf("%c", plain_text);
    }

    return 0;
}