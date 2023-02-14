#include <stdio.h>
#include <string.h>

int gcd(int a, int b)
{
    int gcd;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    char message[100];
    int key1;
    int key2;
    printf("Enter the message of 100 letters in smallcase : ");
    gets(message);
    printf("enter the first key : ");
    scanf("%d", &key1);
    printf("enter the second key : ");
    scanf("%d", &key2);
    if (gcd(key1, 26) == 1)
    {
        printf("this is for inverse");
        return;
    }
    int message_length = strlen(message);
    for (int i = 0; i < message_length; i++)
    {
        int text = ((message[i] - 'a') * key1) % 26;
        int cipher_text = (text + key2) % 26 + 'A';
        printf("%c", cipher_text);
    }

    return 0;
}
