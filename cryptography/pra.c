#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLOCK_SIZE 8
#define KEY_SIZE 16
#define NUM_ROUNDS 8

void key_schedule(unsigned char *key, unsigned char round_keys[NUM_ROUNDS][KEY_SIZE])
{

    memcpy(round_keys[0], key, KEY_SIZE);
    for (int i = 1; i < NUM_ROUNDS; i++)
    {
        memcpy(round_keys[i], round_keys[i - 1], KEY_SIZE);
    }
}

void permutation(unsigned char *block)
{
    unsigned char temp[BLOCK_SIZE];

    memcpy(temp, block, BLOCK_SIZE);
    for (int i = 0; i < BLOCK_SIZE; i++)
    {
        block[i] = temp[(i + 3) % BLOCK_SIZE];
    }
}

void encrypt(unsigned char *plaintext, unsigned char *ciphertext, unsigned char *key)
{
    unsigned char round_keys[NUM_ROUNDS][KEY_SIZE];
    key_schedule(key, round_keys);

    memcpy(ciphertext, plaintext, BLOCK_SIZE);
    for (int i = 0; i < NUM_ROUNDS; i++)
    {

        for (int j = 0; j < BLOCK_SIZE; j++)
        {
            ciphertext[j] = s_box[ciphertext[j]];
        }
        permutation(ciphertext);
        // XOR with round key
        for (int j = 0; j < BLOCK_SIZE; j++)
        {
            ciphertext[j] ^= round_keys[i][j % KEY_SIZE];
        }
    }
}

int main()
{

    return 0;
}