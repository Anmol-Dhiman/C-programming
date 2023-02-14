#include <stdio.h>
#include <string.h>
int main()
{
    char message[100];
    printf("Enter the message of 100 letters in lower case : ");
    gets(message);
    int key = 3;
    int message_length = strlen(message);

    for (int i = 0; i < message_length; i++)
    {
        int cipher_letter = (message[i] - 'a' + key) % 26 + 65;
        printf("%c", cipher_letter);
    }

    return 0;
}