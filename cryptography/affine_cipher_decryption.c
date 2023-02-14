#include <stdio.h>
#include <string.h>

int inverse(int a)
{

    for (int i = 0; i <= 25; i++)
    {
        if ((a * i) % 26)
            return i;
    }
}
int main()
{
    char message[100];
    int key1 = 3;
    int key2 = 3;
    printf("Enter the cipher text of 100 letters in uppercase : ");
    gets(message);
    int key1_inverse = inverse(key1);
    int message_length = strlen(message);
    for (int i = 0; i < message_length; i++)
    {
        int text = ((message[i] - 'A') - key2) % 26;
        int cipher_text = ((text * key1_inverse) % 26) + 'a';
        printf("%c", cipher_text);
    }

    return 0;
}